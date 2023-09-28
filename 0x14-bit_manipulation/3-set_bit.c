#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at given index
 * @n: pointer for the number
 * @index: the index of the bit you want
 * Return: 1 if worked, else -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numb = 1;

	numb <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) | numb;
	return (1);
}
