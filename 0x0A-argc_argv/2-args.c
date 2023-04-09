#include <stdio.h>

/**
 * main - Entry point
 * @argc: something
 * @argv: something else
 *
 * Return: something
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);

}
