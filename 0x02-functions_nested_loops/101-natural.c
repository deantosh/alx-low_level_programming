#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	/*declare variables*/
	int num, r1, r2, sum;

	for (num = 0; num < 1024; num++)
	{
		r1 = num % 3;
		r2 = num % 5;

		if (r1 == 0 || r2 == 0) 
			sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
