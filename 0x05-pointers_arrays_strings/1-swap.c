/**
 * swap_int - swaps the values of two integers
 * @a: value for variable 1
 * @b: value for variable 2
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
