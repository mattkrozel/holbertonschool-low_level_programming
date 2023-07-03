#include "variadic_functions.h"
/**
 * print_strings -  a function that executes a function given as
 * a parameter on each element of an array.
 * @separator: A pointer to array
 * @n: Size of the array
 * @...: action(function) to iterate throw array
 * Return: Nothing
 */


void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list p;
	unsigned int x = 0;
	char str;

	va_start(p, n);
	for (; x < n; x++)
	{
		str = va_arg(p, char);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);

}
