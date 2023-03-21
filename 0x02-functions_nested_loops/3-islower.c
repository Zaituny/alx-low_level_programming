#include "main.h"

/**
 * _islower - checks whether a char is lower case or not
 *@c: char to check
 *
 * Return: 1 if lower case 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
