#include "main.h"

/**
 * _puts - prints out a string
 * @str: the string to be printed is trored here
 * Return: returns nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
