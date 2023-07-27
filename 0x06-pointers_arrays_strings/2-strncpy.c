#include "main.h"

/**
  * _strncpy - Copy a string staring from index 0 of `dest`
  * @dest: pointer to the destination string
  * @src: pointer to the source string
  * @n: number of characters to copy
  * Return: destination
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
