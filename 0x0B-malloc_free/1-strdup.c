#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - creates a new memory space and puts a copy of a string
 * @str: the string to be kept in the memory
 * Return: returns a pointer to the new location of the string
 */

char *_strdup(char *str)
{
	char *new_loc = malloc(sizeof(str) + 1);
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	if (new_loc == NULL)
	{
		return (NULL);
	}
	else
	{
	while (str[i] != '\0')
	{
		new_loc[i] = str[i];
		i++;
	}
	}
	new_loc[sizeof(str) + 1] = '\0';
	return (new_loc);
}
