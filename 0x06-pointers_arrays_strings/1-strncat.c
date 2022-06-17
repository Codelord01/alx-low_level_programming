/**
 * _strcat - concatenates two strings
 * @dest: stores value for first string
 * @src: stores value for second string
 * Return: Returns a character that holds the concatenated string
 * @n: stores number of src strings that should be concatenated to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0' && i < n )
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	return (dest);
}

