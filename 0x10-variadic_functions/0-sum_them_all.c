#include "variadic_functions.h"

/**
  * sum_them_all - return the sum of all its parameters
  * @n: number of arguments being passed
  * @...: variable number of parameters to calculate the sum of
  * Return: 0 if n == 0, otherwise the sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum;

	va_start(list, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
