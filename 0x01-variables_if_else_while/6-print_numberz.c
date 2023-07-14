#include <stdio.h>

/**
  * main - A program that prints all single digit numbers of base 10
  * starting from 0, followed by a newline.
  * You are not allowed to use any varibale of type char
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
