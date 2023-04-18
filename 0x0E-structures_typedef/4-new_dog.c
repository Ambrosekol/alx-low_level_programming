#include "dog.h"
/**
 * new_dog - name
 * @name: new dog name
 * @age: dog age
 * @owner: owner
 * Return: dog_t new type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog* newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);
	newDog->name = (char*)malloc(strlen(name) + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->name, name);
	newDog->owner = (char*)malloc(strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
