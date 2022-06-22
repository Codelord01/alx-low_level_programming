/**
 * factorial - finds the factorial of a given integer
 * @n: holds the value of the integer
 * Return: Returns the factorial value as an integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
