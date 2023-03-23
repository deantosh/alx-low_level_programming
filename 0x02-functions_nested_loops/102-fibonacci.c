#include <stdio.h>

/**
 * main - Entry pointt
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*declare variable*/
	int count;
	unsigned long sum;
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;

	for (count = 0; count < 50; count++)
	{
		/*add the first no. to the second number*/
		sum = fib1 + fib2;

		printf("%lu", sum);

		/*set values of variables for the next count*/
		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");

		else
			printf(", ");
	}

	return (0);
}
