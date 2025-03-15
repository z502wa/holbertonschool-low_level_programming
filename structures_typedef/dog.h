#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Structure for a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This structure defines the properties of a dog,
 * including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog to print
 */
void print_dog(struct dog *d);

#endif /* DOG_H */
