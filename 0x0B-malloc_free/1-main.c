#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * abd initializes it to a specific char.
 * @size: size of memory in bytes
 * @c: character to initialize
 *
 * Return: pointer to array(success)
 * NULl if size = 0(error)
 */
char *create_array(unsigned int size, char c)
{
	char *set;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	set = malloc(sizeof(*set) * size);

	if (set == NULL)
		return (0);

	while (i < size)
	{
		*(set + i) = c;
		i++;

	}
	*(set + i) = '\0';
	return (set);
}
