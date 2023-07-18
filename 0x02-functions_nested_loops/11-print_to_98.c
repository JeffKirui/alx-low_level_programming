#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - print all natural numbers from n to 98, followed by new line
  * @n: integer to be computed
  */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);

		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);

		printf("%d\n", n);
	}
}
