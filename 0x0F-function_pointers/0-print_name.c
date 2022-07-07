#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: A string of characters
 * Return: returns nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
