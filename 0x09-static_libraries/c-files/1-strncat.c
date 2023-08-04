#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: pointer destination
  * @src: pointer source
  * @n: number of elements to concatenate in
  * Return: pointer to resulting `dest`
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
