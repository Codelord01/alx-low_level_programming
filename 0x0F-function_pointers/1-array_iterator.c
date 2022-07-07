#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes function given
 * @array: the array that contains the elements
 * @size: the size of the array
 * @action: pointer to the function to be executed
 * Return: returns nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
