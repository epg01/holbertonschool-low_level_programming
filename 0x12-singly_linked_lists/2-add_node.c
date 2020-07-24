#include "lists.h"
/**
 * add_node - prints string
 * @head: pointer to string
 * @str: pointer to string
 * Return: none
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->next = *head;
	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	node->len = i;
	*head = node;
	return (*head);

}
