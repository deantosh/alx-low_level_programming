#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	/*declare variable*/
	int n;
	int last_digit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/*find last digit*/
	last_digit = n % 10;

	/*Define conditions to execute*/
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
