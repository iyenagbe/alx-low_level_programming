#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - the length of a string
 * @s: the string to be evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * *_strcpy - copies the string pointed to src
 * including the terminating null of byte (\0)
 * to the buffer pointed by dest
 * @dest: pointer to buffer in which we can copy the string
 * @src: the string to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - creating a new dog
 * @name:  the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
