/**
 *_memcpy - function that copies one memory area to another
 * @dest: variable that contains the the destination of the copied memory area
 * @src: variable from which the memory area is copied
 * @n: stores how many bytes to be copied
 * Return: Returns a char of the copied bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

