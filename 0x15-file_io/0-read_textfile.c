/*
 * File: 0-read_textfile.c
 * Author: Deantosh M Daiddoh
 */

#include "main.h"
#include <stdio.h>
#include <sys/types.h>

/**
 * read_textfile - Reads a specified number of characters from a text file.
 * @filename: The name of the text file.
 * @letters: The number of characters to read from file.
 *
 * Return: The number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char ch;
	size_t count;

	fp = fopen(filename, "r");

	/*process starts here*/
	if (fp == NULL)
	{
		return (0);
	}

	count = 0;
	while ((ch = fgetc(fp)) != EOF && count < letters)
	{
		_putchar(ch);
		count++;
	}
	return (count);
	/*process ends*/

	fclose(fp);
}
