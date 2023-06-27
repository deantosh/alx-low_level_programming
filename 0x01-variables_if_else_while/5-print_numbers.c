#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	/*declare variable*/
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}
	putchar('\n');
	return (0);
}
