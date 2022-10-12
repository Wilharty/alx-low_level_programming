#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: integer
 * Return: pointer to the array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *alocmem = malloc(b);

	if (!alocmem)
		exit(98);

return (alocmem);
}
