#include "main.h"

int helper_function(int n, int i);

/**
 * _sqrt_recursion - calculate square root
 * @n: int to obtain the square root for
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper_function(n, 0));
}

/**
 * helper_function - calculates square root
 * @n: number to get square root for
 * @i: iterator
 *
 * Return: i if i is the square root
 */
int helper_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper_function(n, i + 1));
}
