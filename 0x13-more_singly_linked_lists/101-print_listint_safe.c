#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - writes the character c to stdout
 * @head: The character to print
 *
 * Return: list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listint_t *aux = (void *) head;

	while (head != NULL && aux > head->next)
	{
		aux = (void *)head;
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		head = head->next;
	}
	if (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		head = head->next;
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (i);
}
