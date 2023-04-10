#include <stdio.h>

/**
 * main - Entry point.
 * @argc: The number of arguments passed.
 * @argv:  An array of pointers to the arguments.
 *
 * Return: Always (0) Success.
 */

int main(int argc, char **argv)
{
	/*declare variable*/
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
