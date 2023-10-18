#include "main.h"

/**
 * _strncmp - FUnction that compare two strings
 * @str1: first string
 * @str2: second string
 * @n: maximum number of bytes to compare
 * Return: 0 if first n bytes of s1 and s2 are equal, otherwise non-zero
 */
int _strncmp(const char *str1, const char *str2, size_t n)
{
	for ( ; n && *str1 && *str2; --n, ++str1, ++str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
	}
	if (n)
	{
		if (*str1)
			return (1);
		if (*str2)
			return (-1);
	}
	return (0);
}

/**
 * close_fxn - Function that closes a file descriptor and
 * print an error message upon failure
 * @fd: the file descriptor to close
 */
void close_fxn(int fd)
{
	if (close(fd) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close fd\n", 22);
	exit(98);
}

/**
 * read_fxn - Function that read from a file and print an error message upon failure
 * @fd: file descriptor to read
 * @buf: buffer to write
 * @count: number of bytes to read
 */
void read_fxn(int fd, char *buf, size_t count)
{
	if (read(fd, buf, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	close_fxn(fd);
	exit(98);
}

/**
 * elf_mag - Function to print ELF magic
 * @buffer: the ELF header
 */
void elf_mag(const unsigned char *buf)
{
	unsigned int i;

	if (_strncmp((const char *) buf, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < 16; ++i)
		printf("%02x%c", buf[i], i < 15 ? ' ' : '\n');
}

/**
 * elf_class - Function to print ELF class
 * @buffer: the ELF header
 * Return: bit mode (32 or 64)
 */
size_t elf_class(const unsigned char *buf)
{
	printf("  %-34s ", "Class:");

	if (buf[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buf[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buf[EI_CLASS]);
	return (32);
}

/**
 * elf_data - Function to print ELF data
 * @buffer: the ELF header
 * Return: 1 if big endian, else 0
 */
int elf_data(const unsigned char *buf)
{
	printf("  %-34s ", "Data:");

	if (buf[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (buf[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}

/**
 * elf_ver - Function to print ELF version
 * @buffer: the ELF header
 */
void elf_ver(const unsigned char *buf)
{
	printf("  %-34s %u", "Version:", buf[EI_VERSION]);

	if (buf[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * elf_osabi - print ELF OS/ABI
 * @buffer: the ELF header
 */
void elf_osabi(const unsigned char *buf)
{
	const char *os_table[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies OpenVOS"
	};

	printf("  %-34s ", "OS/ABI:");

	if (buf[EI_OSABI] < 19)
		printf("%s\n", os_table[(unsigned int) buf[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", buf[EI_OSABI]);
}

/**
 * elf_abivers - print ELF ABI version
 * @buffer: the ELF header
 */
void elf_abivers(const unsigned char *buf)
{
	printf("  %-34s %u\n", "ABI Version:", buf[EI_ABIVERSION]);
}

/**
 * elf_type - print ELF type
 * @buffer: the ELF header
 * @big_endian: endianness (big endian if non-zero)
 */
void elf_type(const unsigned char *buf, int big_endian)
{
	char *type_table[5] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};
	unsigned int type;

	printf("  %-34s ", "Type:");

	if (big_endian)
		type = 0x100 * buf[16] + buf[17];
	else
		type = 0x100 * buf[17] + buf[16];

	if (type < 5)
		printf("%s\n", type_table[type]);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", type);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
		printf("Processor Specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}

/**
 * elf_entry - print entry point address
 * @buffer: string containing the entry point address
 * @bit_mode: bit mode (32 or 64)
 * @big_endian: endianness (big endian if non-zero)
 */
void elf_entry(const unsigned char *buf, size_t bit_mode, int big_endian)
{
	int address_size = bit_mode / 8;

	printf("  %-34s 0x", "Entry point address:");

	if (big_endian)
	{
		while (address_size && !*(buf))
			--address_size, ++buf;

		printf("%x", *buf & 0xff);

		while (--address_size > 0)
			printf("%02x", *(++buf) & 0xff);
	}
	else
	{
		buf += address_size;

		while (address_size && !*(--buf))
			--address_size;

		printf("%x", *buf & 0xff);

		while (--address_size > 0)
			printf("%02x", *(--buf) & 0xff);
	}

	printf("\n");
}

/**
 * main - copy a file's contents to another file
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: Always 0
 */
int main(int argc, const char *argv[])
{
	unsigned char buf[18];
	unsigned int bit_mode;
	int big_endian;
	int fd;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}

	read_fxn(fd, (char *) buf, 18);

	elf_mag(buf);
	bit_mode = elf_class(buf);
	big_endian = elf_data(buf);
	elf_ver(buf);
	elf_osabi(buf);
	elf_abivers(buf);
	elf_type(buf, big_endian);

	lseek(fd, 24, SEEK_SET);
	read_fxn(fd, (char *) buf, bit_mode / 8);

	elf_entry(buf, bit_mode, big_endian);

	close_fxn(fd);

	return (0);
}
