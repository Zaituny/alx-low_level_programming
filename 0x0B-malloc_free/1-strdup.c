#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates new space and saves a str in it
 * @str: string to be duplicated
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = (char *) malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	while ((new_str[i] = str[i]) != '\0')
		i++;

	return (new_str);
}
