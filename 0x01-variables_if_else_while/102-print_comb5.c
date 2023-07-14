#include <stdio.h>

/**
  * main - A program that prints all possible combinations of two-digit
  * numbers.
  * Description: Numbers should range from 0 to 99.
  * The two numbers should be separated by a space.
  * All numbers should be printed with two digits.
  * Combination of numbers must be separated by a comma followed by a space.
  * Combinations of numbers should be printed in ascending order.
  * `00 01` and `01 00` are considered as the same combination.
  * You can only use `putchar` to print to console, up to 8 times.
  * You are not allowed to use any variable of type `char`.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
