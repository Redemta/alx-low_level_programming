#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: pointer to string that represents name to print.
 * @f: pointer to function,takes char * as parameter, and returns void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
