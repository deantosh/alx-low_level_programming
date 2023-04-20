/*
 * File: 3-op_functions.c
 * Author: Deantosh M Daiddoh
 */

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: sum of the integers.
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - Finds the difference of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: Difference of two integers.
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: Product of two integers.
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: Result of the division.
 */
int op_div(int a, int b)
{
	int div;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	div = a / b;
	return (div);
}

/**
 * op_mod - Gets the remainder of the division of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The modulus of two integer.
 */
int op_mod(int a, int b)
{
	int mod;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	mod = a % b;
	return (mod);
}
