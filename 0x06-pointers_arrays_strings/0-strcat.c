#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: pointer destination
  * @src: pointer source
  * Return: pointer to resilting string `dest`
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
