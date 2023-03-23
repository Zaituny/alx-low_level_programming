#include "main.h"

/**
 * _isupper - this function is used to check if a char is in upper case or not
 * @c: char to be checked
 *
 * Return: 1 if char is upper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
