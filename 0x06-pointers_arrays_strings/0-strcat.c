#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: return pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0 ; src[i] ; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
