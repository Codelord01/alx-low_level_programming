/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be loacated
 * Return: returns a pointer to the first occurrence c in the string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != c && *(s + i) != c)
	{
		i++;
	}

	if (*(s + i) == c)
	{
		return ((s + i));
	}
	else
	{
	return (0);
	}
}
