#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - writes the character c to stdout
 * @head: The character to print
 * @index: name
 *
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int t = 0;

	aux = head;
	while (t < index)
	{
		if (aux == NULL)
			return (NULL);
		aux = aux->next;
		t++;
	}
	return (aux);
}
