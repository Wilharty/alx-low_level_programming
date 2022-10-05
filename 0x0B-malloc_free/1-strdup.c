#include "main.h"
#include <stdlib.h>
/**
 * _strdup - func that return a ptr to the duplic strg
 * @str: the ptr to the duplicate string
 * Return: 0 if str is NULL, otherwise str
 */
char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int i = 0;
	char *new_str;

	if (*str == 0)
		return (0);

	while (*str != '\0')
	{
		size++;
	}
	size++;

	new_str = malloc(sizeof(*str) * size);

	if (new_str == 0)
		return (0);

	while (i <= size)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
