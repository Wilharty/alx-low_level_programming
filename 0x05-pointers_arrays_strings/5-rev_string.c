#include "main.h"
/**
 * rev_string - funct that reverse a string
 * @s: variable string
 */
void rev_string(char *s)
{
	int i, j, k;

	i = 0;
	j = 0;
	while
		(s[j] != '\0')
	{
		j++;
	}
		j--;
	while
		(j > i)
	{
		k = s[j];
		s[j--] = s[i];
		s[i++] = k;
	}
}
