#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*declare variable*/
	int num, r3, r5;

	for (num = 1; num <= 100; num++)
	{
		/*Get remainder*/
		r3 = num % 3;
		r5 = num % 5;

		/*check for multiple of 3 and 5*/
		if (r3 == 0 && r5 == 0)
		{
			printf("FizzBuzz");
		}
		/*check for multiples of 3*/
		else if (r3 == 0)
		{
			printf("Fizz");
		}
		/*check for multiples of 5*/
		else if (r5 == 0)
		{
			printf("Buzz");
		}
		/*print the number*/
		else
		{
			printf("%d", num);
		}
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
