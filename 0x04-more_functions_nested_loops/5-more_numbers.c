#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 */
void more_numbers(void)
{
	char a, i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar('0' + a / 10);
			_putchar('0' + (a % 10));
		}
		_putchar('\n');
	}
}
