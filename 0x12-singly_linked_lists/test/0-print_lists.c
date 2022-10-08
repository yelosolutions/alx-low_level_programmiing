#include <stdio.h>
#include "list.h"

/**
 * print_list - prints all elements of a list_t list
 *
 * @h: pointer to the singly linked list list_t
 * Return: number of nodes of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	while(h)
	{

		if (!h->str)
			printf("[0](nill)\n");
		else
			printf("This is the length: [%u], of this string: %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
