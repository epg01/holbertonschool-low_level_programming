#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *reverse_listint - writes the character c to stdout
 * @head: The character to print
 *
 * Return: list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = *head;
	listint_t *aux1;

	if (*head == NULL)
		return (NULL);

	(*head) = (*head)->next;
	aux->next = NULL;
	aux1 = *head;
	while ((*head))
	{

		(*head) = (*head)->next;
		aux1->next = aux;
		aux = aux1;
		aux1 = *head;
	}
	(*head) = aux;
	return (*head);
}
