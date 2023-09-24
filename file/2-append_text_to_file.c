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
	int file, wf, cf, i;

	/* Check if the pointer is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file and save the return in the file description */
	file = open(filename, O_APPEND | O_WRONLY);

	/* Check if the file was opened successfully */
	if (file == -1)
		return (-1);

	/* Check if txt_content is not null,and loop over the content */
	if (text_content != NULL)
	{
		/* for loop to get the length */
		for (i = 0; text_content[i] != '\0'; i++)
			continue;

		/* write the text_content inside the new file created */
		wf = write(file, text_content, i);
	}

	/* Check if the file was written successfully */
	if (wf == -1)
		return (-1);

	/* Close the file when finished*/
	cf = close(file);

	/* Check if the file was closed successfully */
	if (cf == -1)
		return (-1);

	return (1);
}
