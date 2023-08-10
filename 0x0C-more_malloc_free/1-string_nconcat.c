#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat- concatenates two strings, only n bytes of second string
  * @s1: string 1
  * @s2: string 2
  * @n: bytes of s2 to be included
  * Return: NULL if fail, else pointer to malloc memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i++])
		len++;

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		s[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		s[len++] = s2[i];
	s[len] = '\0';
	return (s);
}
