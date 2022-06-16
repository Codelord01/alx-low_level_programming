/**
 * _strcat - concatenates two strings
 * @dest: stores value for first string
 * @src: stores value for second string
 * Return: Returns a character that holds the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	return (dest);
}
