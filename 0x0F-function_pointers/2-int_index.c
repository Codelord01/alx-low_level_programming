#include<stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the arrays to be searched
 * @size: the size of the array
 * @cmp: the function that compares the int
 * Return: returns the 0, or -1 to show the status of search
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
