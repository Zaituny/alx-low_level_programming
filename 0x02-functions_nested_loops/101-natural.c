#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int n, sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n++;
		else
			n++;
	}
	printf("%d\n", sum);
	return (0);
}
