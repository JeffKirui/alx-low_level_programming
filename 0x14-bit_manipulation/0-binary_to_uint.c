#include "main.h"


/**
  * binary_to_int - converts a binary number to an unsigned int.
  * @b: string of binary numbers
  * Return: converted number else 0 if there is one or more characters in
  * string @b that is not 0 or 1, or if @b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (b[index])
	{
		if (b[index] == '0' || b[index] == '1')
		{
			n <<= 1;
			n += b[index] - '0';
			index++;
		}
		else
			return (0);
	}
	return (n);
}
