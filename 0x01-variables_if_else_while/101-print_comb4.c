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
	int outerDigit, innerDigit, iD1;

	for (outerDigit = '0'; outerDigit < '9'; outerDigit++)
	{
		for (innerDigit = outerDigit + 1; innerDigit <= '9'; innerDigit++)
		{
			for (iD1 = innerDigit + 1; iD1 <= '9'; iD1++)
			{
				if (innerDigit == outerDigit || innerDigit == iD1 || outerDigit == iD1)
					continue;
				putchar(outerDigit);
				putchar(innerDigit);
				putchar(iD1);

				if (outerDigit == '7' && innerDigit == '8' && iD1 == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
