#include "main"

/**
  * main - A program that prints _putchar, followed by a new line.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	char *main = "_putchar";

	while (*main)
	{
		_putchar(*main);
		main++
	}
	_putchar('\n');
	return (0);
}
