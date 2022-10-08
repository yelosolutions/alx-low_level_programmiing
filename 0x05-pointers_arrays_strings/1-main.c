#include "main.h"
#include <stdio.h>

/**
 * main - swaps betweens val of a and b
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	a = 56;
	b = 40;
	printf("a = %d, b = %d\n", a, b);
	swap_int(&a , &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}
