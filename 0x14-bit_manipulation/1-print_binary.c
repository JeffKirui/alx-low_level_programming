#include "main.h"

/**
  * print_binary - function that prints the binary representation of a number
  * @n: the number to convert
  */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int cpy;

	cpy = n;

	while (cpy > 0)
	{
		cpy >>= 1;
		count++;
	}
	if (count != 0)
		count--;
	while (count >= 0)
	{
		if ((n >> count) & 1)
			_putchar('1');
		else
			_putchar('0');
		count--;
	}

}
