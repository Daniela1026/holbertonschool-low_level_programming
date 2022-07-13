#include <stdio.h>
#include "dog.h"

/**
* init_dog - initialize a variable
* @d: Character pointer
* @name: Character char
* @age: Character float
* @owner: character char
* Return: Always 0.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
