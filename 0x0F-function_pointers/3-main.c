/*
 * File: 3-main.c
 * Author: Deantosh M Daiddoh
 */

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of arguments.
 * @argv: The argument vector.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int (*selected_func)(int, int);
	int result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	selected_func = get_op_func(argv[2]);
	if (!selected_func)
	{
		printf("Error\n");
		exit(99);
	}
	/*convert string to int*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = selected_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
