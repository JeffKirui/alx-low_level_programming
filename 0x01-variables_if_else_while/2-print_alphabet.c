#include <stdio.h>

/**
  * main - A program that prints the alphabet in lowercase, followed
  * by a newline
  *
  * Return: 0 (Success)
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
