#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H
#define BUFF_SIZE 1204

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

int _puthar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strncmp(const char *str1, const char *str2, size_t n);
void close_fxn(int fd);
void read_fxn(int fd, char *buf, size_t count);
void elf_mag(const unsigned char *buf);
size_t elf_class(const unsigned char *buf);
int elf_data(const unsigned char *buf);
void elf_version(const unsigned char *buf);
void elf_osabi(const unsigned char *buf);
void elf_abivers(const unsigned char *buf);
void elf_type(const unsigned char *buf, int big_endian);
void elf_entry(const unsigned char *buf, size_t bit_mode, int big_endian);

#endif /* MAIN_HEADER_H */
