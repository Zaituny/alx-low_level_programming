#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: value to obtain last digit from
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int temp = n % 10;

	if (temp >= 0)
	{
		_putchar('0' + temp);
		return (temp);
	}
	else
	{
		_putchar('0' - temp);
		return (-temp);
	}
}
