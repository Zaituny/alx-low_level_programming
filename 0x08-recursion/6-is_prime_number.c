#include "main.h"

int helper_function(int n, int i);

/**
 * is_prime_number - is the number prime
 * @n: check prime
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper_function(n, n - 1));
}

/**
 * helper_function - function that helps
 * @n: number to check
 * @i: iterator
 *
 * Return: something
 */
int helper_function(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (helper_function(n, i - 1));
}
