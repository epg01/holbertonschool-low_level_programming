#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - writes the character c to stdout
 * @h: The character to print
 *
 * Return: On success 1.
 */
size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h != NULL)
		t++, h = h->next;
	return (t);
}
