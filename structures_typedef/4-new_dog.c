#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, dname, downer;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
	free(new_dog);
	return (NULL);
	}
	for (dname = 0; name[dname]; dname++)
	;
	for (downer = 0; owner[downer]; downer++)
	;
	new_dog->name = malloc(dname + 1);
	new_dog->owner = malloc(downer + 1);
	if (!(new_dog->name) || !(new_dog->owner))
	{
	free(new_dog->owner);
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}
	for (i = 0; i < dname; i++)
	new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	new_dog->age = age;
	for (i = 0; i < downer; i++)
	new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';

	return (new_dog);
}
