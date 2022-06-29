#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - creates a new memory space and puts a copy of a string
 * @str: the string to be kept in the memory
 * Return: returns a pointer to the new location of the string
 */

char *_strdup(char *str)
{
	char *new_loc;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	new_loc = malloc(sizeof(char) * (len + 1));

	if (new_loc == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		new_loc[i] = str[i];
		i++;
	}

	new_loc[sizeof(str) + 1] = '\0';
	return (new_loc);
}
