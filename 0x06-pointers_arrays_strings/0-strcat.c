#include "main.h"

/**
 * main - concatenates two strings
 * @dest - string to append to
 * @src - string to add
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;


	while (dest[i] != '\0')
		i++;

	while (str[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
