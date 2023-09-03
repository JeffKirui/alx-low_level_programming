#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * @void: takes no argument
 * Return: 0 if big endian and 1 if little
 */
int get_endianness(void)
{
	unsigned int n = 1;

	char *str = (char *)&n;

	if (*str)
		return (1);
	return (0);
}
