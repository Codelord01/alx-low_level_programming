#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: A string of characters
 * Return: returns nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
