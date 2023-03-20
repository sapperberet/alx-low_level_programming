#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - entry point
 * @s: str
 * Return: size
 */
int _strlen(char *s)
{
	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}

/**
 * *_strcpy - entry point
 * @dest: pointer
 * @src: str
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int size;
	int i;

	size = 0;

	while (src[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - entry point
 * @name: str
 * @age: float
 * @owner: name
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;
	int x;
	int y;

	x = _strlen(name);
	y = _strlen(owner);

	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	dogy->name = malloc(sizeof(char) * (x + 1));
	if (dogy->name == NULL)
	{
		free(dogy);
		return (NULL);
	}
	dogy->owner = malloc(sizeof(char) * (y + 1));
	if (dogy->owner == NULL)
	{
		free(dogy);
		free(dogy->name);
		return (NULL);
	}
	_strcpy(dogy->name, name);
	_strcpy(dogy->owner, owner);
	dogy->age = age;

	return (dogy);
}
