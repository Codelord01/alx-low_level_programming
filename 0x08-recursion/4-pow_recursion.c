/**
 * _pow_recursion - returns the power of first variable to the second one
 * @x: first variable that raises the second
 * @y: second variable to be raised
 * Return: Returns first varibale raised to second one as an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
