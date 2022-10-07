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
	int *aloc_mem = malloc(b);

	if (!aloc_mem)
		exit(98);

return (aloc_mem);
}
