#include "main.h"

/**
 * get_endianness - checks the endianness
 * @void: takes no argument
 * Return: 0 if big endian and 1 if little
 */
int get_endianness(void)
{
	unsigned int num = 1;

	char *str = (char *)&num;

	if (*str)
		return (1);
	return (0);
}
