#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 * Return: Pointer to the newly created dog, or NULL if malloc fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = strdup(name);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = strdup(owner);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;

	return (newDog);
}
