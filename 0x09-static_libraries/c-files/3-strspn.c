#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: char string array
  * @accept: char array to check bytes with
  * Return: Number of bytes in the initial segment of `s`
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int len;

	while (*s)
	{
		for (len = 0; accept[len]; len++)
		{
			if (*s == accept[len])
			{
				count++;
				break;
			}
			else if (accept[len + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
