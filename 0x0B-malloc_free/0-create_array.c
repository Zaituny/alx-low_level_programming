#include "main.h"

/**
 * create_array - creates an array of size size
 * @size: size of array
 * @c: char to init the array with
 *
 * Return: pointer to array of size size
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(sizeof(char) * size);
	ar[0] = c;

	return (ar);
}
