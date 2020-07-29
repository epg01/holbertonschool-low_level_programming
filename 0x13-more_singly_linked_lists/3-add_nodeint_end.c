#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_nodeint_end - writes the character c to stdout
 * @head: The character to print
 * @n: name
 *
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux;
	listint_t *tmp;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);
	aux->n = n;
	aux->next = NULL;
	if (*head == NULL)
	{
		*head = aux;
		return (aux);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = aux;
	return (aux);
}
