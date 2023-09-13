#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: pointer to string that represents name to print.
 * @f: pointer to function,takes char * as parameter, and returns void.
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * custom_printer - f parameter to print_name.
 * @str: string parameter.
 */

void custom_printer(char *str)
{
	printf("Custom Printer: %s\n", str);
}
