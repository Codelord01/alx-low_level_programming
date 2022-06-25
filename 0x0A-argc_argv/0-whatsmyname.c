#include<stdio.h>
/**
 * main - this is main function where everything is executed
 * @argc: this stores the number of arguments passed
 * @argv: this stores the arrays being passed
 * Return: returns and integer 0
 */

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s \n", argv[i]);
	return (0);
}
