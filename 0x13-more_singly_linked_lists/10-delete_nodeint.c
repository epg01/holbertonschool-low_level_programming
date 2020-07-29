#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - writes the character c to stdout
 * @head: The character to print
 * @index: name
 *
 * Return: number
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *delete;
	unsigned int i = 0;

	aux = *head;
	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		aux = (*head);
		(*head) = (*head)->next;
		free(aux);
		return (1);
	}
	while (i < (index - 1) && aux->next)
	{
		aux = aux->next;
		i++;
	}
	if (i == (index - 1))
	{
		delete = aux->next;
		aux->next = delete->next;
		free(delete);
		return (1);
	}
	return (-1);

}
