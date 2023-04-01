#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: A pointer to the string.
 *
 * Return: A pointer to the capitalized string (str).
 */

char *cap_string(char *str)
{
	/*declare variable*/
	int i = 0;

	while (str[i])
	{
		/*get index of character after separator*/
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		/*if separator capitalize next character*/
		if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\n' ||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '.' ||
			str[i - 1] == '!' ||
			str[i - 1] == '?' ||
			str[i - 1] == '"' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}' ||
			i == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
