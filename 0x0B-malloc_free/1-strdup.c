#include "main.h"
#include <stdlib.h>

/**
  * _strdup - return pointer to newly allocated space in memory
  * @str: original string
  * Return: pointer to a pointer to new duplicated string
  */
char *_strdup(char *str)
{
	int i, c;
	char *a;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
