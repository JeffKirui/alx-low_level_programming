#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: number to check
  * @index: index to check the bit
  * Return: value of the bit at @index, else -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (i >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n >> i) & 1)
		return (1);
	else
		return (0);

	return (i);
}
