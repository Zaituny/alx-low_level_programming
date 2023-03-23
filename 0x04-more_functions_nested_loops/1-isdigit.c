#include "main.h"

/**
 * _isdigit - this function checks whehter a char is a digit or not
 * @c: char to be checked
 *
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
