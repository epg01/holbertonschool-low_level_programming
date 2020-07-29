#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - writes the character c to stdout
 * @head: The character to print
 *
 * Return: list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		aux = *head;
		free(*head);
		*head = aux->next;
	}
	free(*head);
	(*head) = NULL;
}
