#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog -all for new dog
 * @name: name to dog
 * @age: age to dog
 * @owner: owner to dog
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *m;

	m = malloc(sizeof(dog_t));
	if (m == NULL)
	{
		return (NULL);
	}

	m->name = malloc(strlen(name) + 1);
	if (m->name == NULL)
	{
		free(m);
		return (NULL);
	}
	strcpy(m->name, name);

	m->owner = malloc(strlen(owner) + 1);
	if (m->owner == NULL)
	{
		free(m->owner);
		free(m);
		return (NULL);
	}
	strcpy(m->owner, owner);

	m->age = age;

	return (m);
}
