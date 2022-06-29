#include<stdlib.h>
#include<stdio.h>
/**
 * create_array - create an array and initializes with a specific char
 * @size: stores the size of the array
 * @c: stores the character
 * Return: returns a pointer or null when it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
