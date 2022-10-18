#include "main.h"

/**
 * _strncpy - copyy
 * @dest: string 1
 * @src: string 2
 * @n: limit
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0 ; src[i] && i < n ; i++)
		dest[i] = src[i];

	for (i = len ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
