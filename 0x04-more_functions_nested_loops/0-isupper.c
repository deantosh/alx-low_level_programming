#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 for uppercase and 0 if not
 */

int _isupper(int c)
{
	/*declare variable*/
	char ch;

	/*for each ch compare with the input*/
	for (ch = 65; ch <= 90; ch++)
	{
		/*check each character*/
		if (c == ch)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
