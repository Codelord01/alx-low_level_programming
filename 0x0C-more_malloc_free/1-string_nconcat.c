#include<stdio.h>
#include<stdlib.h>

/**
 * check_null - checks to see where one or all of arguments are null
 * @s1: stores the first string
 * @s2: stores the second string
 * @n: stores the number of first string to be concatenated
 * Return: Returns a pointer to the concatenated string
 */

char *check_null(char *s1, char *s2, unsigned int n)
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
		new = malloc(sizeof(char) * n);
		if (new == NULL)
			return (NULL);
		while (n != 0)
		{
			new[j] = s2[j];
			j++, n--;
		}
	}
	return (new);
}

/**
 * string_nconcat - Concatenates first string with n number of second string
 * @s1: stores the value of the first string
 * @s2: stores the value of the second string
 * @n: shows the number of characters to be concatenated with s1
 * Return: returns a pointer to a new concatenated string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL || s2 == NULL)
		check_null(s1, s2, n);
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
	{
		new_string = malloc(sizeof(char) * (len1 + len2));
		if (new_string == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			new_string[j] = s1[i];
			i++, j++;
		}
		while (s2[k] != '\0')
		{
			new_string[j] = s2[k];
			k++, j++;
		}
	}
	else
	{
		new_string = malloc(sizeof(char) * (len1 + n));
		if (new_string == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			new_string[j] = s1[i];
			i++, j++;
		}
		while (n != 0)
		{
			new_string[j] = s2[l];
			l++, j++, n--;
		}
	}
	return (new_string);
}
