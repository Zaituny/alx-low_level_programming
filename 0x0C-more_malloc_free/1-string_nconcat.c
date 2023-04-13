#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - does something
 * @s1: first string
 * @s2: second string
 * @n: we will find out soon
 *
 * Return: something
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		ptr = (char *) malloc(strlen(s1) + strlen(s2) + 1);
	else
		ptr = (char *) malloc(strlen(s1) + n + 1);

	if (ptr == NULL)
		return (NULL);

	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
