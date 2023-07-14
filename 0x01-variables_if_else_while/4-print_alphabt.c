#include <stdio.h>

/**
  * main - A program that prints the alphabet in lowercase, followed
  * by a newline, except e and q
  * Return: 0 (Success)
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');

	return (0);
}
