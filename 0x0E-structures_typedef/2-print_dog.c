/*
 * File: 2-print_dog.c
 * Author: Deantosh M Daiddoh
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints struct dog
 * @d: A pointer to the struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("%p\n", NULL);
	}
	if (d->name == NULL || d->age == 0 || d -> owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
