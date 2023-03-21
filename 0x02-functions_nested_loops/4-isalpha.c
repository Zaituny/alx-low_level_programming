#include "main.h"

/**
 * _isalpha - checks whether a char is alphabetic or not
 * @c: char to be checked
 *
 * Return: 1 if alphabetic 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
