#include <stdio.h>

/**
  * main - A program that prints all possible different combinations
  * of three digits.
  * Description: Numbers must be seperated by commas and a space.
  * The 3 digits must be different.
  * 012, 120, 102, 021, 201, 210 are considered the same combination.
  * Print only the smallest combination of 3 digits.
  * Number should be printed in ascending order.
  * You can only use `putchar1 to print to console, up to 6 times.
  * You are not allowed to used any variables of type `char`.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
