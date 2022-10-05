#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - func that creat array of chars, initi it with a specif char
 * @size: the size of the array
 * @c: the specific array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array_char = malloc(sizeof(char) * size);

	if (size == NULL)
	{
		printf("No bytes allocate\n");
		return (1);
	}

	for (i = 0; i < size; i++)
	{
		array_char[i] = c;
	}
		return (array_char);
}
