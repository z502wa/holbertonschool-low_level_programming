#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to dog_t struct to free
 *
 * Description: This function frees the memory allocated for a dog_t struct,
 * including the memory for the name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
