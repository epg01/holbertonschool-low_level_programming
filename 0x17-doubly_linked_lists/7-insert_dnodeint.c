#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **Head, unsigned int idx, int n)
{
	if (!idx || !(*Head)->next)
	{
		dlistint_t *New_Element = NULL;

		New_Element = (dlistint_t *)malloc(sizeof(dlistint_t));

		New_Element->n    = n;

		if (!(*Head)->next && idx)
			return (NULL);
		if (!(*Head)->next || (*Head)->next)
		{
			New_Element->next = (*Head)->next;
			New_Element->prev = (*Head);
		}
		else if (!(*Head)->prev)
		{
			New_Element->next = (*Head);
			New_Element->prev = (*Head)->prev;
			(*Head)->prev     = New_Element;
		}

		if ((*Head)->next)
			(*Head)->next->prev = New_Element;
		(*Head) = New_Element;
		return (New_Element);
	}
	else
		return (insert_dnodeint_at_index(&(*Head)->next, --idx, n));
}
