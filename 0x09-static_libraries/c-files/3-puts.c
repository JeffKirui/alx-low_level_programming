#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		++a;
	}
	_putchar('\n');
}
