#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

/**
 * sum_them_all - function that sums all its arguments
 * @n: indicates numbers of arguments
 * @...: indicates variable arguments
 * Return: returns the sum of all the values
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
