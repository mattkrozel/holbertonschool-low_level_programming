#include "function_pointers.h"
#include <stdarg.h>

/**
 * sum_them_all - a funnction that sums all parameters
 * @n: input
 * @...: input
 * Return: nothing
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list p;
	unsigned int x = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(p, n);
	for (; x < n; x++)
		sum += va_arg(p, int);

	va_end(p);
	return (sum);
}
