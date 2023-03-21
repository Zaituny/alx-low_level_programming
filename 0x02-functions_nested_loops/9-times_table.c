#include "main.h"

/**
 * times_table - prints the times tables
 */
void times_table(void)
{
	char table_number, multiplier;

	for (table_number = 0; table_number <= 9; table_number++)
	{
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			char temp = table_number * multiplier;
			char temp2 = table_number * (multiplier + 1);

			if (temp < 10)
				_putchar('0' + temp);
			else
			{
				_putchar('0' + temp / 10);
				_putchar('0' + (temp % 10));
			}
			if (multiplier != 9 && temp2 < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (multiplier != 9 && temp2 >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
