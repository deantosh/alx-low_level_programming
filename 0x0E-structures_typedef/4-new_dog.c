/*
 * File: 4-new_dog.c
 * Author: Deantosh M Daiddoh
 */

#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *str);

/**
 * _strlen - Gets the length of a string.
 * @str: The string to obtain length.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0, index = 0;

	while (str[index])
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * _strcpy - Copies a string.
 * @str: A pointer to the string to copy.
 * @dest: A pointer to the copied string.
 *
 * Return: A pointer to the copied string.
 */
char *_strcpy(char *dest, char *str)
{
	int index, str_len;

	/*get length of str*/
	str_len = _strlen(str);

	for (index = 0; index < str_len; index++)
		dest[index] = str[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - create a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct of dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *patty;

	patty = malloc(sizeof(dog_t));
	if (patty == NULL)
		return (NULL);

	patty->name = malloc(sizeof(char) * _strlen(name));
	if (patty->name == NULL)
	{
		free(patty);
		return (NULL);
	}

	patty->owner = malloc(sizeof(char) * _strlen(owner));
	if (patty->owner == NULL)
	{
		free(patty->owner);
		free(patty);
		return (NULL);
	}

	patty->name = _strcpy(patty->name, name);
	patty->age = age;
	patty->owner = _strcpy(patty->owner, owner);

	return (patty);
}
