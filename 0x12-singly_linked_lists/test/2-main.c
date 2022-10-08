#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * struct node - singly linked list
 *
 *
 *
 *
 */
typedef struct list_s
{
	char *str;

	struct list_s *next;
}list_t;

/*
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *new;
	list_t *head;
	list_t str1 = {"Nyinyi", NULL};

	head = &str1;


	new = malloc (sizeof(list_t));
	new->str = "Hello!\n";
	new->next = head;
	head = new;

	printf("%s", new->str);
	free(new);
	printf("%s", head->str);

	return (0);
}
