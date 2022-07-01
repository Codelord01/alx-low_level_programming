#include<stdio.h>
#include<stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: tells the amount of memory to be allocated
 * Return: returns a pointer to the allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
