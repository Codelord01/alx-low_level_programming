/**
 *_memcpy - function that copies one memory area to another
 * @dest: variable that contains the the destination of the copied memory area
 * @src: variable from which the memory area is copied
 * @n: stores how many bytes to be copied
 * Return: Returns a char of the copied bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*(dest + n) = *(src + n);
		n++;
	}
	return (dest);
}
