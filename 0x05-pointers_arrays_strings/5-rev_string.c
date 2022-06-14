/**
 * rev_string - prints the reverse of a string
 * @s: the variable that holds the string to be reversed
 * Return: returns nothing
 */
void rev_string(char *s)
{
	int len, i;
	char l;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	len--;
	for (i = 0; i < len; i++)
	{
		l = *(s + len);
		*(s + len) = *(s + i);
		*(s + i) = l;
		len--;
	}
}
