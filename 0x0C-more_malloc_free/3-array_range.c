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
	int * ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = (int *) malloc(sizeof(int) * (max - min) + 1);
	if (ptr)
	{
		for (i = min; i <= max; i++)
			ptr[i] = i;
		return (ptr);
	}
	return (NULL);
}
