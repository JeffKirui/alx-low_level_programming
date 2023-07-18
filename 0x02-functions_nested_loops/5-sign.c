#include "main.h"

/**
  * print_sign - Print the sign of a number
  * @n: type int integer, can be positive or negative
  * Description: print +, 0, or - depending on number, along with return
  * Return: 1 if positive, 0 if zero and -1 if negative.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
