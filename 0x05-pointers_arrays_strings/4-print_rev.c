#include "main.h"
/**
 * _strlen -calculates the length of a string
 * @s: variable that holds the string
 * Return: Return the lenght of string as integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - prints the reverse of a string
 * @s: the variable that holds the string to be reversed
 * Return: returns nothing
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
