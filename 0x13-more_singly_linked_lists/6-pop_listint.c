#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - writes the character c to stdout
 * @head: The character to print
 *
 * Return: content
 */
int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *aux;

	if (*head == NULL)
		return (0);
	aux = *head;
	x = (*head)->n;
	aux = aux->next;
	free(*head);
	*head = aux;
	return (x);
}
