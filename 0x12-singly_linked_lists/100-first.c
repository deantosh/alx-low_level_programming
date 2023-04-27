/*
 * File: 100-first.c
 * Author: Deantosh M Daiddoh
 */

#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - Executed first before main and prints a constatnt string. 
 *
 * Return: void.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
