/**
 * _memset - Function that fills memory wiht constant byte
 * @s: the variable that stores the string to be filled
 * @b: the variable that stores the constant byte
 * @n: the variable that strores the nunber of memory spaces to be filled
 *Return: Returns a char which is the filled string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		*(s + i) = b;
		i++;
		n--;
	}
	return (s);
}
