#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string that separates the numbers
 * @n: number of arguments
 * Return: returns nothing
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d",value);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
