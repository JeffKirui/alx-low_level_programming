#include <stdio.h>

/**
  * main - A program that prints the alphabet in lowercase, and
  * then uppercase, followed by a newline.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
