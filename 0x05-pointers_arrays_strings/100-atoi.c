#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: num
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;
	int x = 0;

	while (s[i])
	{
		/*negative num*/
		if (s[i] == 45)
		{
			sign *= -1;
		}

		/*convert string to number*/
		while (s[i] >= 48 && s[i] <= 57)
		{
			/*let x = 1 for each iteration*/
			x = 1;
			num = (num * 10) + (s[i] - 48);
			i++;
		}

		if (x == 1)
		{
			break;
		}

		i++;
	}
	/*mutiply number with '-'*/
	num *= sign;
	return (num);
}
