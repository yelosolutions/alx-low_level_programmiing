#include <stdio.h>
#include "dogt.h"

/**
 * main - acceses struct do and prints its elements
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Rex";
	my_dog.age = 2;
	my_dog.owner = "Jay";
	printf("My name is %s, my owner is %s, and I am %.1f - Woof!\n", my_dog.name, my_dog.owner, my_dog.age);
	return (0);
}       
