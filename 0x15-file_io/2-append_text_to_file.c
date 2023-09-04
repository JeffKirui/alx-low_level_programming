#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: points to the file that we will be receiving
 * @text_content: NULL terminated string to add at end of file
 *
 * Return: 1 if success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wf, len;

	if (filename == NULL)
		return (-1);

	if (text_content !=  NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	wf = write(file, text_content, len);

	if (wf == -1 || file == -1)
		return (-1);

	close(file);
	return (1);
}
