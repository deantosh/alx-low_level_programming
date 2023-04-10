#include <stdio.h>

/**
 * main - Entry point.
 * @argc: The number of arguments passed.
 * @argv:  An array of pointers to the arguments.
 *
 * Return: Always (0) Success.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
