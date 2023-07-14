#include <stdio.h>

/**
  * main - A program that prints the lowercase alphabet in reverse,
  * followed by a newline.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
