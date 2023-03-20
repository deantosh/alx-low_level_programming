#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	/*declare variables*/
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		/*print character in lower case*/
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		/*print character in upper case*/
		putchar(ch);
	}

	/*Add a new line*/
	putchar('\n');
	return (0);
}
