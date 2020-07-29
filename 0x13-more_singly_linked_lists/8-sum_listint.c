#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - writes the character c to stdout
 * @head: The character to print
 *
 * Return: list
 */
int sum_listint(listint_t *head)
{
	int t = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		t += head->n;
		head = head->next;
	}
	return (t);
}
