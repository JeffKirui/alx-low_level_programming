#include "main.h"

/**
 * _isalpha - Check for an alphabetic character
 * @c: character to be checked
 * Return: 1 (if lowercase or uppercase letter)
 * 0 (otherwise)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
