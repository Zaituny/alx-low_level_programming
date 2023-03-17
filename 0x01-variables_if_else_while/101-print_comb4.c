#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int outerDigit, innerDigit, innerDigit1;

	for (outerDigit = '0'; outerDigit < '9'; outerDigit++)
	{
		for (innerDigit = outerDigit + 1; innerDigit <= '9'; innerDigit++)
		{
			for (innerDigit1 = innerDigit + 1; innerDigit1 <= '9'; innerDigit1++)
			{
				if (innerDigit == outerDigit || innerDigit == innerDigit1 || outerDigit == innerDigit1)
					continue;
				putchar(outerDigit);
				putchar(innerDigit);
				putchar(innerDigit1);

				if (outerDigit == '7' && innerDigit == '8' && innerDigit1 == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
