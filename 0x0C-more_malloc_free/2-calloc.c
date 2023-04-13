#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to array
 * @nmemb: number of elements in array
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (!(nmemb && size))
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr)
	{
		for (i = 0; i < size; i++)
			ptr[i] = 0;
		return (ptr);
	}
	return (NULL);
}
