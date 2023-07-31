#include "main.h"

/**
  * _strpbrk - Search a string for any set of bytes
  * @s: string
  * @accept: string to match
  * Return: Pointer to the byte in `s` tha t matches one of the bytes in
  * `accept` or NULL if no such byte is found.
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
