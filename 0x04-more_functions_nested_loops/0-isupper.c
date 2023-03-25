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
	char ch, val;

	/*for each ch compare with the input*/
	for (ch = 65; ch <= 90; ch++)
	{
		/*check each character*/
		if (c == ch)
		{
			/*set return value*/
			val = 1;
		}
		else
		{
			/*set set resturn value*/
			val = 0;
		}
	}
	return (val);
}
