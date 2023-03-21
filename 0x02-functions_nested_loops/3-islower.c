#include "main.h"

/**
 * _islower - checks for lowercase character
 * @ch: The character to be checked
 *
 * Return: 1 (lowecase) and 0 (not lowercase)
 */

int _islower(int ch)
{
	/*use the equivalent ASCII for letters a-z*/
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
