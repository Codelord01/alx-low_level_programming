#include<stdio.h>

/**
 * main - the main function where execution occurs
 * @argc: stores the number of arguments
 * @argv: the the values of the arguments
 * Return: returns an integer 0
 **/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
