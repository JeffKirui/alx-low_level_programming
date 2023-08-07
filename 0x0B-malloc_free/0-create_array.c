#include "main.h"
#include <stdlib.h>

/**
  * create_array - create an array of chars and initializes with specific char
  * @size: size of array
  * @c: specific char
  * Return: char pointer to malloc created memory address or NULL if error
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
