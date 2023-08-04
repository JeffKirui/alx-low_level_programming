#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiply two numbers passed to main
  * @argc: argument count
  * @argv: argument vector
  * Return: 1 if error, 0 if function runs correctly
  */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
