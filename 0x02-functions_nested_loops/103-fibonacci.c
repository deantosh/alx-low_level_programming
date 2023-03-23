#include <stdio.h>

/**
 * main - prints the sum of evenly-valued fib-sequence not exceeding 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*declare variables*/
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long fibsum;
	float sum;

	while (1)
	{
		fibsum = fib1 + fib2;

		if (fibsum > 4000000)
			break;

		/*check if fibsum is even*/
		if ((fibsum % 2) == 0)
			sum += fibsum;

		/*set valuess for the next iteration*/
		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", sum);

	return (0);
}
