#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 *	  to make change for an amount of money.
 *
 * @argc: The number of arguments passed.
 * @argv:  An array of pointers to the arguments.
 *
 * Return: Always (0) Success.
 */

int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if (cents > 24)
		{
			cents -= 25;
			continue;
		}
		if (cents > 9)
		{
			cents -= 10;
			continue;
		}
		if (cents > 4)
		{
			cents -= 5;
			continue;
		}
		if (cents > 1)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
