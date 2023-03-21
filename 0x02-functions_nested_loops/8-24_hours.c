#include "main.h"

/**
 * jack_bauer - prints all minutes of the day
 */
void jack_bauer(void)
{
	int minutes;
	int hours;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + (minutes % 10));
			_putchar('\n');
		}
	}
}
