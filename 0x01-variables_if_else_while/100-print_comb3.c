#include <stdio.h>

/**
  * main - A program that prints all possible different combinations
  * of two digits.
  * Description: Numbers must be separated by commas and a space.
  * 01 and 10 are considered as the same combination of two digits.
  * Print only the smallest combination of two digits.
  * Numbers should be printed in ascending order, with two digits.
  * You can only use `putchar`, up to 5 times.
  * You are not allowed to use any varibale of type `char`.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);

				if (i != 56 || j != 57)
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
