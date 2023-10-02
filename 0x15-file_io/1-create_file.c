#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the pointer to file name to be created
 * @text_content: the text that is being written
 * Return: 1 on success, -1 on failure6
 */
int create_file(const char *filename, char *text_content)
{
	int file, wf, len, cf;

	/* Check if the pointer came NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file and save the return in the file description */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	/* Check if the file was opened successfully */
	if (file == -1)
		return (-1);
	/* if txt_content is not null, then loop over the content */
	if (text_content != NULL)
	{
		/* for loop to get the length */
		for (len = 0; text_content[len] != '\0'; len++)
			continue;
		/* write the text_content inside the new file created */
		wf = write(file, text_content, len);
	}

	/* Check if the file was writed successfully */
	if (wf == -1)
		return (-1);

	/* Close the file when finished*/
	cf = close(file);

	/* Check if the file was closed successfully */
	if (cf == -1)
		return (-1);

	return (1);
}
