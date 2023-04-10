#include <stdio.h>
#include <stdlib.h>

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
	int first_num, second_num, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	first_num = atoi(argv[argc - 2]);
	second_num = atoi(argv[argc - 1]);
	result = first_num * second_num;

	printf("%d\n", result);

	return (0);

}
