#include <stdio.h>

/**
  * main - A program that prints all the numbers of base 16 in lowercase,
  * followed by a new line.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	char c;
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
