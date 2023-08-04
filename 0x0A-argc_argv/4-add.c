#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive numbers and prints result
  * @argc: argument count
  * @argv: argument array vector
  * Description: If no number is passed, print 0
  * If one of the arguments containd non-digits, print error.
  *
  *Return: 1 if error and 0 if function runs properly
  */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;
	char *p;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
