#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars.
 * @c: characters to print
 * @size: size of memory
 *
 * Return: NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (0);

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}

	*(ptr + i) = '\0';

	return (ptr);
}
