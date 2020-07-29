#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_nodeint - writes the character c to stdout
 * @head: The character to print
 * @n: the number
 *
 * Return: On success 1.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);
	aux->n = n;
	aux->next = *head;
	*head = aux;
	return (aux);
}
