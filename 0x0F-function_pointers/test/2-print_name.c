#include "test.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to void variable
 *
 * Return: no return.
 */
void print_name(char *name, void(*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
	
}	
