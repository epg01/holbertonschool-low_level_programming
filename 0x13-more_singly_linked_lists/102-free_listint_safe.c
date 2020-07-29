#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - function that print a linked list content
 * @h: header pointer
 * Return: amount of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listint_t *tmp;

	if (h == NULL)
		return (0);

	if (*h == NULL)
	{
		return (0);
	}

	while (*h != NULL)
	{
		tmp = *h;
		*h = tmp->next;
		free(tmp);
		n++;
	}
	*h = NULL;
	return (n);
}
