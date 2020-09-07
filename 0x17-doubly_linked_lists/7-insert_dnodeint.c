#include "lists.h"

#define STATE 1000

dlistint_t *
R_insert_dnodeint_at_index(dlistint_t **Head, unsigned int idx, int n);
dlistint_t *
insert_dnodeint_at_index(dlistint_t **Head, unsigned int idx, int n);

dlistint_t * Back_Go(dlistint_t *Element, unsigned int idx, int n)
{
	if (!Element->prev)
		return (R_insert_dnodeint_at_index(&(Element), idx, n));
	else
		return (Back_Go(Element->prev, idx, n));
}
dlistint_t * Forward(dlistint_t *Element, unsigned int idx, int n)
{
	if (!idx || !Element->next)
	{
		if (!Element->next)
			idx = STATE;
		return (R_insert_dnodeint_at_index(&(Element), idx, n));
	}
	else
		return (Forward(Element->next, --idx, n));
}

dlistint_t *
R_insert_dnodeint_at_index(dlistint_t **Head, unsigned int idx, int n)
{
	if (*Head && (*Head)->prev && idx != 0 && idx != STATE)
		*Head = Back_Go((*Head)->prev, idx, n);
	if (*Head && !(*Head)->prev && idx)
	{
		return (Forward((*Head)->next, --idx, n));
	}
	else if (!idx || idx == STATE)
	{
		dlistint_t *New_Element;
		New_Element = (dlistint_t*)malloc(sizeof(dlistint_t));
		New_Element->n = n;
		if (!*Head)
		{
			New_Element->next = (*Head);
			New_Element->prev = (*Head);
			(*Head)           = New_Element;
			return (New_Element);
		}
		else if (!(*Head)->prev)
		{
			New_Element->next = (*Head);
			New_Element->prev = (*Head)->prev;
			(*Head)->prev     = New_Element;
			(*Head)           = New_Element;
			return (New_Element);
		}
		else if (idx == STATE)
		{
			New_Element->next = (*Head)->next;
			New_Element->prev = (*Head);
			(*Head)->next     = New_Element;
		}
		else
		{
			New_Element->next   = (*Head);
			New_Element->prev   = (*Head)->prev;
			(*Head)->prev->next = New_Element;
			(*Head)->prev       = New_Element;
		}
		return (New_Element);
	}
	return ((*Head));
}


dlistint_t *
insert_dnodeint_at_index(dlistint_t **Head, unsigned int idx, int n)
{
	if (!Head)
		return (NULL);
	else if (idx <= dlistint_len(*Head))
		return (R_insert_dnodeint_at_index(Head, idx, n));
	else
		return (NULL);
}
