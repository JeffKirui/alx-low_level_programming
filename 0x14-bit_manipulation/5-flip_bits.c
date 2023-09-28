#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one numver to another
 * @n: the first number
 * @m: the second number
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;
	int i = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int num = n ^ m;

	for (count = 0; i >= 0; i--)
	{
		if (((num >> i) & 1) == 1)
			count += 1;
	}
	return (count);
}
