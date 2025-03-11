#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it
 * with a given char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if size is 0 or if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* Return NULL if size is 0 */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(size * sizeof(char));

	/* Check if malloc failed */
	if (array == NULL)
		return (NULL);

	/* Initialize the array with character c */
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
