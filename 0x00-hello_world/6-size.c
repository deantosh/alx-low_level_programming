#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*declare variables*/
	int a;
	long int b;
	char c;
	float d;

	/*print the size of the data types*/
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a float: %lu byte(s)", sizeof(d));
	return (0);
}
