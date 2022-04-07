#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate.
 *
 * Return: pointer to allocated memory(success)
 */
void *malloc_checked(unsigned int b)
{
	void *set;

	set = malloc(b);

	if (set == NULL)
		exit(98);

	return (set);
}
