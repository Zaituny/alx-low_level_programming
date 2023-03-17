#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int outerNumber, innerNumber;

	for (outerNumber = 0; outerNumber <= 98; outerNumber++)
	{
		for (innerNumber = outerNumber + 1; innerNumber <= 99; innerNumber++)
		{
			putchar((outerNumber / 10) + '0');
			putchar((outerNumber % 10) + '0');
			putchar(' ');
			putchar((innerNumber / 10) + '0');
			putchar((innerNumber % 10) + '0');

			if (outerNumber == 98 && innerNumber == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
