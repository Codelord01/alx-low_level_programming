#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates the string
 * @n: number of arguments
 * Return: returns nothing
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char*));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
