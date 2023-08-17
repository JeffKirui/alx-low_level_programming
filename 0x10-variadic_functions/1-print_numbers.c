#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - prints numbers with separator, followed by a newline
  * @separator: the string to be printed between numbers
  * @n: number of arguments to be passed
  * @...: variable number of numbers to be printed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
