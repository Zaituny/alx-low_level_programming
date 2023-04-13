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
	int *ar;

	if (!(nmemb && size))
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr)
	{
		ar = ptr;
		for (i = 0; i < size; i++)
			ar[i] = 0;
		return (ptr);
	}
	return (NULL);
}
