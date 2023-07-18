#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: int type number
  * Return: return value of last digit
  */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
