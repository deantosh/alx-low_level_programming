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
	char lower_ch;

	for (ch = "A"; ch <= "Z"; ch++)
	{
		/*convert character to lower case*/
		lower_ch = tolower(ch);

		/*print ch*/
		putchar(lower_ch);
	}
	return (0);
}
