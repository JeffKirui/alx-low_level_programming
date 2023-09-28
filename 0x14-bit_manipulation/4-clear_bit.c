#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to a number
 * @index: index of the bit you want
 * Return: 1 if it works, else -1 if there's an error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) & ~(num);
	return (1);


}
