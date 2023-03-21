#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 (lowecase) and 0 (not lowercase)
 */

int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
