#include "main.h"

/**
  * _strchr - locate character in a string
  * @s: char array string
  * @c: char to look for
  * Return: NULL if char not found, or pointer to first occurence of char `c`
  */
char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
			return (s);
	} while (*s++);
	return ('\0');
}
