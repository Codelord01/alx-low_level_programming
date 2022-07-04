#ifndef DOG
#define DOG

/**
 * struct dog - a description of a dog
 * @name: specifies the name of the dog
 * @age: stores the age of the dog
 * @owner: stores the dog owner's name
 * Description: a structure describes a dog.
 **/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
