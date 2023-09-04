#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: points the file we will be receiving
 * @letters: size of letters to read
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0, rf = 0, wf = 0, cf;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	/* Check if pointer is NULL */
	if (buf == NULL || filename == NULL)
		return (0);

	/* Open the file and save the return value in the file description */
	file = open(filename, O_RDONLY);
	/* Read the content file */
	rf = read(file, buf, letters);
	/* Write the file with the content obtained from readFile */
	wf = write(STDOUT_FILENO, buf, rf);


	/* Check if file successfully opened */
	if (file == -1 || rf == -1 || wf == -1)
		return (0);

	/* Closing the file */
	cf = close(file);

	/* Check if file successfully opened */
	if (cf == -1)
		return (0);

	free(buf);
	return (rf);
}
