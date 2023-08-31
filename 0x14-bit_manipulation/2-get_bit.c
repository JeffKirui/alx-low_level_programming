#include "main.h"

/**
  * get_bit - function that returns the value of a bit at a given index
  * @n: the number to check
  * @index: the index to check the bit
  * Return: value of the bit at @index, else -1 if there's an error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);

	return (index);
}
