#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - print a string followed by a newline
  * @separator: string to be printed between strings
  * @n: the number of strings to be printed
  * Description: If separator is NULL, it's will not be printed.
  * If one of the strings is NULL, (nil) is printed.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
