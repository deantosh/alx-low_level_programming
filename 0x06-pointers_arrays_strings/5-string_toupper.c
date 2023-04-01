#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: A pointer to the string to be converted.
 *
 * Return: A pointer to the converted string.
 */

char *string_toupper(char *str)
{
	/*declare a variable*/
	int i = 0;

	/*check if character is lowercase*/
	while (str[i])
	{
		/*ASCII values a - z*/
		if (str[i] >= 97 && str[i] <= 122)
		{
			/*convert to uppercase*/
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
