#include "main.h"

/**
 * leet - encodes a string.
 *	Letters (a and A) to 4.
 *	Letters (e and E) to 3.
 *	Letters (o and O) to 0.
 *	Letters (t and T) to 7.
 *	Letters (l and L) to 1.
 *
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string (str).
 */

char *leet(char *str)
{
	/*declare variable*/
	int i = 0, j;
	int leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j < 8; j++)
		{
 			if (str[i] == leet[j] || str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
			}
		}
		i++;
	}
	return (str);
}
