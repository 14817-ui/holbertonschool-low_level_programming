#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int name_len, owner_len;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	name_len = strlen(name);
	owner_len = strlen(owner);

	new->name = malloc(sizeof(char) * (name_len + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;

	return (new);
}
