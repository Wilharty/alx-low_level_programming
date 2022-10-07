#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: integer
 * Return: pointer to the array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *al_memo = malloc(b);

	if (!al_memo)
		exit(98);

return (m);
}
