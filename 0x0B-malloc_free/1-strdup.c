#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  funct that returns a ptr to a new str which is dupli of str
 * @str: pointer to the first char of the given string
 *
 * Return: pointer to the dupli string or NULL if str is null
 */
char *_strdup(char *str)
{
	int len = 0;
	int size = 0;
	char *array;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	size++;

	array = malloc(sizeof(*str) * size);
	while (str[len])
	{
		array[len] = str[len];
		len++;
	}

	return (array);
}
