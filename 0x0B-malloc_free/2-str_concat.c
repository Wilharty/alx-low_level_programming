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
	char *new_str = "";
	int size1 = 0;
	int size2 = 0;
	char *dest = new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*s1)
		size1++;

	while (*s2)
		size2++;

	new_str = malloc(sizeof(char) * (size1 + size2 + 1));
	if (new_str == NULL)
		return (NULL);

	while (*s1)
	{
		*dest = *s1;
		dest++;
		s1++;
	}

	while (*s2)
	{
		*dest = *s2;
		dest++;
		s2++;
	}
	*dest = '\0';

	return (new_str);
}
