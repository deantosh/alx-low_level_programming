#include "main.h"

int check_prime(int sum, int div);

/**
 * check_prime - Performs divisibility test on the number.
 * @num: The number to check.
 * @div: The divider used to test for prime numbers.
 *
 * Return: i - if number is prime.
 *		0 - if number is not prime.
 */

int check_prime(int num, int div)
{
	if (div == num)
		return (1);

	if ((num % div) == 0)
		return (0);

	return (check_prime(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to evaluate.
 *
 * Return: 1 - if n is a prime number and  0 - if not.
 */

int is_prime_number(int n)
{
	/*declare variable*/
	int div = 2;

	if (n <= 1)
		return (0);

	return (check_prime(n, div));
}
