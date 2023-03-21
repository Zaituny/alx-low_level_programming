#include "main.h"

/**
 * _abs - calculates absolute value of int
 * @n: value to calculate absolute value for
 *
 * Return: absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-1 * n);
}
