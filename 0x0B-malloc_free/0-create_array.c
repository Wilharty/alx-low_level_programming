#include "main.h"
#include <stdlib.h>
/**
 * create_array - funct that creates [] of char & init it with a spec char
 * @size: the size of the array
 * @c: the initialized char
 *
 * Return: q pointer to the array or 0 if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *array = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);
	while (a < size)
		array[a++] = c;
	return (array);
}
