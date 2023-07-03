#include "function_pointers.h"

/**
 * print_name - a funnction that prints a name
 * @name: input
 * @f: input
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
