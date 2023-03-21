#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	/*declare variable*/
	int digit1, digit2;

	for (digit1 = 0; digit1 < 99; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 100; digit2++)
		{
			/*print the first digit of first number*/
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');

			/*Add space between then numbers*/
			putchar(' ');

			/*find the first and second digit of the second number*/
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 98 && digit2 == 99)
				continue;

			/*add a ','*/
			putchar(',');

			/*add space between numbers*/
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
