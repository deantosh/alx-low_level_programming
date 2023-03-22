#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: The number to be computed
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int num)
{
	/*declare a variable*/
	int last_digit;

	/*get the remainder of num*/
	last_digit = num % 10;

	_putchar(last_digit +  '0');
	return (0);
}
