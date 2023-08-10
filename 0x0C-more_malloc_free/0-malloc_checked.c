#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - alocates memory using malloc
  * @b: unsigned int memory size to allocate
  * Description: If malloc fails, terminate process with status 98
  *
  * Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit (98);
	return (p);
}
