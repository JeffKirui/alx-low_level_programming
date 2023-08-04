#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: string1
  * @s2: string2
  * Return: negative int if s1 < s2, 0 if matching and positive int if s1 > s2
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
