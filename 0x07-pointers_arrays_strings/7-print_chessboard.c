#include  "main.h"

/**
 * print_chessboard - Prints that chessboard.
 * @a: A pointer to an array of 8 elements.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	/*declare variables*/
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
