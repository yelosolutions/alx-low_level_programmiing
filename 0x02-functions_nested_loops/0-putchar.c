#include <stdio.h>
#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = {95, 112, 117, 116, 99, 104, 97, 114};
int i;
for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
