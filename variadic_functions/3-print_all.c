#include "variadic_functions.h"
/**
 * print_all -  a function that prints anything
 * @*: A pointer to array
 * @format: Size of the array
 * @...: action(function) to iterate throw array
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list p;
	int x = 0;
	char *temp;

	va_start(p, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", (char) va_arg(p, int));
				break;
			case 'i':
				printf("%d", va_arg(p, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(p, double));
				break;
			case 's':
				temp = va_arg(p, char*);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[x] == 'c' || format[x] == 'i' || format[x] == 'f' ||
					format[x] == 's') && format[(x + 1)] != '\0')
			printf(", ");
		x++;
	}
	va_end(p);
	printf("\n");
}
