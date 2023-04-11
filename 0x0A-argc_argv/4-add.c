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
	/*declare variables*/
	int sum = 0;
	int i, digit;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < 48 || argv[i][digit] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
