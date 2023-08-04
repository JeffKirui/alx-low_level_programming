#include "main.h"

/**
  * _memcpy - copy memory area
  * @dest: char array to copy into
  * @src: char array to copy from
  * @n: number of elements to copy
  * Return: pointer to `dest`
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
