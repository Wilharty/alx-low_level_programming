#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: the pointer to the content of the first str
 * @s2: the pointer to the content of the second str
 *
 * Return: the concatenation of s1 qnd s2
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}

	while (*s1)
		size++;
	size++;

	new_str = malloc(sizeof(*s1) * size);
	if (new_str == NULL)
		return (NULL);

	while (*s1)
	{
		*new_str = *s1;
		s1++;
	}
	return (new_str);
}
