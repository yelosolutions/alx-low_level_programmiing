#include "main.h"
#include <stdio.h>

/**
 * main - prints the file name
 * @argc: size of argv[]
 * @argv: array of size argc
 *
 * Return: always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
