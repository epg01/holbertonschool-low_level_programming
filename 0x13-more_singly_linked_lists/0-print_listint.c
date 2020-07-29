#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - writes the character c to stdout
 * @h: The character to print
 *
 * Return: T.
 */
size_t print_listint(const listint_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		t++;
	}
	return (t);
}
