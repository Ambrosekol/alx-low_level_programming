#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog
 * @d: dog struct
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "nil";
	if (d->age == NULL)
		d->age = 0.0;
	if (d->owner == NULL)
		d->owner = "nil";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
