#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: Character pointer
* Return: Always 0.
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
	if (d->age <= 0)
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
