#include "dog.h"
/**
 * init_dog - init dog
 * @d: pointer to struct
 * @name: name of person
 * @age:age of person
 * @owner: owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
