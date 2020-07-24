#include "lists.h"
/**
 * add_node_end - prints string
 * @head: pointer to string
 * @str: pointer to string
 * Return: none
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *node;
	int i;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->next = NULL;
	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	node->len = i;
	if (*head == NULL)
		*head = node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}
