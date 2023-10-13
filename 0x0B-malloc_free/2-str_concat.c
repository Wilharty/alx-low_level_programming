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
	int char_s1_after = 0;
	int char_s2_after = 0;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (*(s1 + char_s1_after))
	{
		size++;
		char_s1_after++;
	}
	while (*(s2 + char_s2_after))
	{
		size++;
		char_s2_after++;
	}

	new_str = malloc(sizeof(char) * (size + 1));

	if (new_str == NULL)
		return (NULL);

	char_s1_after = 0;
	while (*(s1 + char_s1_after))
	{
		*(new_str + char_s1_after) = *(s1 + char_s1_after);
		char_s1_after++;
	}

	char_s2_after = 0;
    	while (*(s2 + char_s2_after))
    	{
		*(new_str + char_s1_after) = *(s2 + char_s2_after);
		char_s1_after++;
		char_s2_after++;
	}
	
	*(new_str + char_s1_after) = '\0';

	return (new_str);
}
