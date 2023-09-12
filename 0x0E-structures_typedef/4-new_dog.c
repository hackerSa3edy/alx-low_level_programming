#include "dog.h"

/**
 * _strcpy - copy the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: the destination variable.
 * @src: the source string.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int size = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
		size = size + sizeof(*src);
	}
	*dest = '\0';
	dest = dest - size;
	return (dest);
}

/**
 * _strlen - return the length of a string.
 *
 * @s: string.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	char *ptr;
	int size = 0;

	ptr = s;
	while (*ptr != '\0')
	{
		size = sizeof(*ptr) + size;
		ptr = ptr + 1;
	}
	return (size);
}

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
	int name_len, owner_len;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	n_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	_strcpy(n_dog->name, name);

	n_dog->age = age;

	owner_len = _strlen(owner);
	n_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	_strcpy(n_dog->owner, owner);

	return (n_dog);
}
