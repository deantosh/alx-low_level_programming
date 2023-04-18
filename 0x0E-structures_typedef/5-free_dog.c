/*
 * File: 5-free_dog.c
 * Author: Deantosh M Daiddoh
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d:  A pointer to struct dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
