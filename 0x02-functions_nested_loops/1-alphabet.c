#include "main.h"

/**
  * print_alphabet - prints alphabet in lowercase
  * Return: 0 (Success)
  */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
