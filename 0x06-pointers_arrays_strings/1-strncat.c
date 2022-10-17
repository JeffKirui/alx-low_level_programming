#include "main.h"

/**
 * _strncat - concatenate
 * @dest: string 1
 * @src: string 2
 * @n: limit
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0 ; src[i] && i < n ; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
