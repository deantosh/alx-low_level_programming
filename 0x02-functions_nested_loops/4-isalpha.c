#include "main.h"

/**
 * _isalpha - checks is a letter is alphabet
 * @ch: The character to be checked
 *
 * Return: 1 (if letter) and 0 (if not letter)
 */

int _isalpha(int ch)
{
	/*ASCII number - letter equivalent*/
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	else if (ch >= 65 && ch <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
