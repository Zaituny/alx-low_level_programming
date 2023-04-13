#include "main.h"
#include <stdlib.h>

/**
 * array_range - makes something
 * @min: min of something
 * @max: max of something
 *
 * Return: something
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = (int *) malloc(sizeof(int) * (abs(max) - abs(min)) + 1);
	if (ptr)
	{
		for (i = 0; i < max; i++)
			ptr[i] = min + i;

		return (ptr);
	}
	return (NULL);
}
