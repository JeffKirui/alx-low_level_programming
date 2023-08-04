#include "main.h"

/**
  * _isdigit - checks for a digit 0 through 9
  * @c: int type parameter to be computed
  * Return: 1 if c is a digit, and 0 otherwise
  */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
