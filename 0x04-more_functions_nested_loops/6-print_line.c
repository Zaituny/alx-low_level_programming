#include "main.h"

/**
 * print_line - prints _ n times followed by a new line
 * @n: number of _ to be printed
 */
void print_line(int n)
{
	int i;

	for (i = n; i >= 1; i--)
		_putchar('_');
	_putchar('\n');
}
