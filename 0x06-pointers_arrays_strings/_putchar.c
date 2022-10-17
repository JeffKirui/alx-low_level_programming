#include "main.h"
#include <unistd.h>

/**
 * _putchar - putchar()
 * @c: printed out
 *
 * Return: putchar
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
