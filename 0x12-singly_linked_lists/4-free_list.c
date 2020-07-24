#include "lists.h"
/**
 * free_list - prints string
 * @head: pointer to string
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
