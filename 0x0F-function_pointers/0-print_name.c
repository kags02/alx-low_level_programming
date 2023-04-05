#include "function_pointers.h"

/**
 * print_name - the function prints the name given.
 * @name: symbolises the name to be used.
 * @f: A pointer to a function to print.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
