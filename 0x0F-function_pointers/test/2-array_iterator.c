#include "test.h"

/**
 * array_iterator - executes a function given
 * a parameter on each element of an array
 * @array: array of elements
 * @size: size of array
 * @action: pointer to fuction in use
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
