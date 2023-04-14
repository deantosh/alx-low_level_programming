#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - Concatenates all the arguments to the program
 *		each argument should be followed by a new line.
 * @ac: The number of arguments passed into the program.
 * @av: The arguments vector.
 *
 * Return: A pointer to a new string
 *	   NULL if ac == 0 or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	int arg, byte, index;
	int str_size = ac;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*get number of all bytes*/
	for (arg = 0;  arg < ac; arg++)
	{
		byte = 0;
		while (av[arg][byte])
		{
			str_size++;
			byte++;
		}
	}
	/*allocate memory to the str pointer*/
	str = malloc(sizeof(char) * str_size + 1);
	if (str == NULL)
		return (NULL);

	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		byte = 0;
		while (av[arg][byte])
		{
			str[index] = av[arg][byte];
			byte++;
			index++;
		}
		str[index] = '\n';
		index++;
	}
	str[index] = '\0';
	return (str);
}
