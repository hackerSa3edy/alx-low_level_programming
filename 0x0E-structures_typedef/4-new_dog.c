#include "dog.h"

/**
 * new_dog - creates a new dog.
 *
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: pointer to the newly created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}
