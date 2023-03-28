#include "main.h"

/**
 * _strlen -gets the length of a string
 * @s: string
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	/*initialize len*/
	int len = 0;

	/*stop  iteration when *s == '\0'*/
	while (*s != '\0')
	{
		/*get length of string*/
		len++;

		/*move pointer to the next memory allocation*/
		s++;
	}
	return (len);
}
