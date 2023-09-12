#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - main function
 * @d: struct dog
 * @name: name character
 * @age: years of puppy
 * @owner: name of the owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
