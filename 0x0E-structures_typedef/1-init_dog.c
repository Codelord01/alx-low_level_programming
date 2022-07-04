#include<stdio.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - function that initializes the structure dog
 * @d: an instance of the struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 * Return: Returns nothing
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
