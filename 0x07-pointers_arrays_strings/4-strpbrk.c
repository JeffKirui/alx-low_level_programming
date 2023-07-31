#include "main.h"

/**
  * _strpbrk - Search a string for any set of bytes
  * @s: string
  * @accept: string to match
  * Retrun: Pointer to the byte in `s` tha t matches one of the bytes in `accept`
  * or NULL if no such byte is found.
  */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
