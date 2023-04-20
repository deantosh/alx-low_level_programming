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
 * Return: void
 */
int main(int argc, char **argv)
{
	int result, sign, num1, num2;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	sign = atoi(argv[2]);

	if (sign != '+' ||
		sign != '-' ||
		sign != '*' ||
		sign != '/' ||
		sign != '%')
	{
		printf("Error\n");
		exit(99);
	}
	/*convert string to int*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((sign == '/' || sign == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(num1, num2);

	printf("%d", result);
	return (0);
}
