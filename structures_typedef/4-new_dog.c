#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: Character char
* @age: Character float
* @owner: character char
* Return: Always 0.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
