#include "main.h"

/**
  * print_alphabet_x10 - prints alphabet 10 times
  * Return: 0 (Success)
  */
void print_alphabet_x10(void)
{
	int i;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
