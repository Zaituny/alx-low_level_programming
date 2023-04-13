#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates space
 * @b: size of allocated space
 *
 * Return: pointer to something
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr)
		return (ptr);
	return (98);
}
