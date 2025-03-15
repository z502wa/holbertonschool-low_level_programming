#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int namecpy, ownercpy, i;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}

	for (namecpy = 0; name[namecpy]; namecpy++)
		;
	for (ownercpy = 0; owner[ownercpy]; ownercpy++)
		;

	new_dog->name = malloc(namecpy + 1);
	new_dog->owner = malloc(ownercpy + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < namecpy; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	new_dog->age = age;

	for (i = 0; i < ownercpy; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';

	return (new_dog);
}
