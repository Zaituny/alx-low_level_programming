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
	int outerDigit, innerDigit;

	for (outerDigit = '0'; outerDigit < '9'; outerDigit++)
	{
		for (innerDigit = outerDigit + 1; innerDigit <= '9'; innerDigit++)
		{
			if (innerDigit == outerDigit)
				continue;
			putchar(outerDigit);
			putchar(innerDigit);

			if (outerDigit == '8' && innerDigit == '9')
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
