#include<stdio.h>
#include<stdlib.h>

/**
 * check_null - checks to see where one or all of arguments are null
 * @s1: stores the first string
 * @s2: stores the second string
 * Return: Returns a pointer to the concatenated string
 */

char *check_null(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *new;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		new = malloc(sizeof(char) * sizeof(s1 - 1));
		if (new == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			new[i] = s1[i];
			i++;
		}
		return (new);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		new = malloc(sizeof(char) * sizeof(s2 - 1));
		if (new == NULL)
			return (NULL);
		while (s2[j] != '\0')
		{
			new[j] = s2[j];
			j++;
		}
	}
	return (new);
}


/**
 * str_concat - concatenates two string and put it into a new pointer
 * @s1: stores the value of the first string
 * @s2: stores the value of the second string
 * Return: returns a character pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *new_string;

	if (s1 == NULL || s2 == NULL)
	{
		check_null(s1, s2);
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}
	new_string = malloc(sizeof(char) * (len1 + len2));

	if (new_string == NULL)
	{
		return (NULL);
	}
	while (len1 > 0)
	{
		new_string[i] = s1[j];
		len1--;
		i++, j++;
	}
	j = 0;

	while (len2 > 0)
	{
		new_string[i] = s2[j];
		len2--;
		i++;
		j++;
	}
	return (new_string);
}
