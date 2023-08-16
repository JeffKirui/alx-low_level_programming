#include "function_pointers.h"

/**
  * print_name - Prints a name from a function pointer.
  * @name: char string
  * @f: fnction pointer that takes a string argument
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
