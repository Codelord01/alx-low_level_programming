#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: the string whos length is to be calculated
 * Return: returns the length of the string as integer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s+1));
	}
	return (0);
}
