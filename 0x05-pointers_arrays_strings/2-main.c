#include "main.h"
#include <stdio.h>

/**
 * main - returns lenght of a string
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("Length of string: %d\n", len);
	return (0);
}
