#include "main.h"
/**
 * _isdigit - checks if a digit is 0 through 9
 * @c: the variable to be checked
 * Return: returns 1 if digit is from 0 to 9, else returns 0
*/

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
