#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;
	int index = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int num = n ^ m;

	for (count = 0; index >= 0; index--)
	{
		if (((num >> index) & 1) == 1)
			count += 1;
	}
	return (count);
}
