#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - funct that cp the str pointed to by src, ...
 * @dest: desc after
 * @src: desc after
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while
		(src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
return (dest);
}
