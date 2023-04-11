#include "main.h"
#include <stdlib.h>

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

	if (size == 0)
		return (NULL);

	ar = (char *) malloc(sizeof(char) * size);

	unsigned int i;

	for (i = 0; i <= size; i++)
	{
		if (i == size)
			ar[i] = '\0';
		ar[i] = c;
	}

	return (ar);
}
