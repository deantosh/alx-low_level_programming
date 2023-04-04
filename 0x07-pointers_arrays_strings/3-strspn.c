#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Initial string.
 * @accept: Pattern to match.
 *
 * Return: The number of bytes in the initial segment of s.
 *	   which consists only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	/*declare variable*/
	int i = 0, j = 0;
	int substr_len = 0;
	int accept_len = 0;
	int count = 0;

	/*get length of initial s substring*/
	while (s[i])
	{
		/*exit loop if first separator found*/
		if (s[i] == ',')
			break;
		substr_len++;
		i++;
	}
	/*get length of accept*/
	while (accept[j])
	{
		accept_len++;
		j++;
	}

	/*loop through the substr and check if each char matches the pattern*/
	for (i = 0; i < substr_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
