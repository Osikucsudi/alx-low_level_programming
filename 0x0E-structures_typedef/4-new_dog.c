#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int y = 0, u = 0, i;
	dog_t *h;

	while (name[y] != '\0')
		y++;
	while (owner[u] != '\0')
		u++;
	h = malloc(sizeof(dog_t));
	if (h == NULL)
	{
		free(h);
		return (NULL);
	}
	h->name = malloc(y * sizeof(h->name));
	if (h->name == NULL)
	{
		free(h->name);
		free(h);
		return (NULL);
	}
	for (i = 0; i <= y; i++)
		h->name[i] = name[i];
	h->age = age;
	h->owner = malloc(u * sizeof(h->owner));
	if (h->owner == NULL)
	{
		free(h->owner);
		free(h->name);
		free(h);
		return (NULL);
	}
	for (i = 0; i <= u; i++)
		h->owner[i] = owner[i];
	return (h);
}
