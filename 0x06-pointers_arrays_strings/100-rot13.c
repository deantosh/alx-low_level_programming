#include "main.h"

/**
 * rot13 - Encode a string using rot13 method.
 * @str: A pointer to the string to be encoded.
 *
 * Return: A pointer to the encoded string (str).
 */

char *rot13(char *str)
{
	/*declare variable*/
	int i = 0;

	while (str[i])
	{
		while ((str[i] >= 'a' && str[i] <= 'z') ||
		       (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] > 'm' && str[i] <= 'z') ||
			   (str[i] > 'M' && str[i] <= 'Z'))
			{
				str[i] -= 13;
				break;
			}

			str[i] += 13;
			break;
		}
		i++;
	}
	return (str);
}
