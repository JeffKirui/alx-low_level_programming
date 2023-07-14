#include <stdio.h>

/**
  * main - A program that prints all combinations of single-digit numbers.
  * Numbers must be seperated by a comma followed by a space
  * Numbers should be printed in ascending order
  * Only use putchar function four times maximum
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
