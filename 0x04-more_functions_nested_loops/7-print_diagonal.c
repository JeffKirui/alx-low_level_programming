#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: number of times the '\' char is printed
  * Description: Can only use _putchar to print
  */
void print_diagonal(int n)
{
	int count = 0, num;

	while (n > 0)
	{
		num = count;
		while (num > 0)
		{
			_putchar(' ');
			num--;
		}
		_putchar('\\');
		_putchar('\n');
		count++;
		n--;
	}
	if (count < 1)
		_putchar('\n');
}
