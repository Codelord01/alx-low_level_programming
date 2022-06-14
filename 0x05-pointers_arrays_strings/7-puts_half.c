#include"main.h"
/**
 * puts_half - prints the second half of a string
 * @str: stores the value of the string
 * Return: returns nothing
 */
void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		int i = len / 2;

		while (*(str + i) != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (len % 2 == 1)
	{
		int i = len / 2 - 1;

		while (*(str + i) != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
