#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of str
 * @str: string to copy
 *
 * Return: pointer to memory space (success),
 * NULL (error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;

	dup = (char *)malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
	return (NULL);

	for (j = 0; j <= i; j++)
	dup[j] = str[j];

	return (dup);
}
