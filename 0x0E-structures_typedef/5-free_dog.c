#include "dog.h"
/**
 * free_dog - new free dog
 * @d: new dogt
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
