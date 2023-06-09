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
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = (char *) malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		if (i == size)
			ar[i] = '\0';
		else
			ar[i] = c;
	}

	return (ar);
}
