#include "main.h"

/**
  * times_table - prints the 9 times table, starting with 0
  */
void times_table(void)
{
	int n, result, mult;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			result = n * mult;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
