#include "main.h"

/**
 * read_error - function that prints read error, and exits if there's an 
 * error reading from file.
 * @file: file pointer
 */
void read_error(char *file)
{	
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * write_error - function that prints an error message, and exits if there's
 * an error writing to file
 * @file: file pointer
 */
void write_error(char *file)
{	
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * close_error - function that prints an error message, and exits if there's
 * an error closing a file descriptor
 * @file: value of file descriptor
 */
void close_error(int file)
{	
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}

/**
 * check_args - function to return error if files are NULL
 * @file: file pointer
 * @file2: file pointer
 */
void check_args(char *file, char *file2)
{
	if (file == NULL)
		read_error(file);
	if (file2 == NULL)
		write_error(file2);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, f_read, f_write, f_close, f_fclose;
	char *buffer;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	check_args(argv[1], argv[2]);
	f_from = open(argv[1], O_RDONLY);

	if (f_from == -1)
		read_error(argv[1]);
	f_to = open(argv[2], O_CREAT | O_RDONLY | O_WRONLY | O_TRUNC, mode);

	if (f_to == -1)
		write_error(argv[2]);
	buffer = malloc(sizeof(char) * BUFF_SIZE);

	if (buffer == NULL)
		return (1);
	f_read = read(f_from, buffer, BUFF_SIZE);

	if (f_read == -1)
		read_error(argv[1]);

	while (f_read > 0)
	{
		f_write = write(f_to, buffer, f_read);
		if (f_write == -1)
			write_error(argv[2]);
		f_read = read(f_from, buffer, BUFF_SIZE);
		if (f_read == -1)
			read_error(argv[1]);
	}
	f_fclose = close(f_from);

	if (f_fclose == -1)
		close_error(f_fclose);
	f_close = close(f_to);

	if (f_close == -1)
		close_error(f_close);
	free(buffer);
	return (0);
}
