#include <stdio.h>

/**
 * main - change age using pointer
 *
 * Return: 0. 
 */
int main(void)
{
	int age;
	age = 30;

	int *ptr_age = &age;

	printf("Current age: %d\n", *ptr_age);
	printf("Address of age in *ptr_age before: %p\n", ptr_age);

	*ptr_age = 45;

	printf("Value of age after: %d\n", *ptr_age);
	printf("Address of age in *ptr_age after: %p\n", ptr_age);

	return (0);
}
