#ifndef DOG_H
#define DOG_H

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
 * init_dog - Initializes a struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
