/**
 * _strncpy - copies a string into another string
 * @dest: stores value of copied string
 * @src: stores value of string to be copied
 * Return: Returns a character that holds the copied string
 * @n: stores number of src strings that should be copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

