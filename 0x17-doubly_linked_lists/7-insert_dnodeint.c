#include "lists.h"

#define STATE 1000

dlistint_t *
R_insert_dnodeint_at_index(dlistint_t **Head, unsigned int idx, int n);
dlistint_t *
insert_dnodeint_at_index(dlistint_t **Head, unsigned int idx, int n);

/**
 * Back_Go - Function that positions the pointer to the head of the
 *           structure
 * @Element: Pointer to one of the nodes of the structure.
 * @idx: Index in which a node will be inserted.
 * @n: Number will be inserted.
 * Return: A pointer to a node in the structure
 */

dlistint_t *Back_Go(dlistint_t *Element, unsigned int idx, int n)
{
	if (!Element->prev)
		return (R_insert_dnodeint_at_index(&(Element), idx, n));
	else
		return (Back_Go(Element->prev, idx, n));
}

/**
 * Forward - Function that positions the pointer to the equivalent to
 *           the index is stored in idx
 * @Element: Pointer to one of the nodes of the structure.
 * @idx: Index in which a node will be inserted.
 * @n: Number will be inserted.
 * Return: A pointer to a node in the structure
 */

dlistint_t *Forward(dlistint_t *Element, unsigned int idx, int n)
{
	if (!idx || !Element->next)
	{
		if (!Element->next && idx)
			idx = STATE;
		return (R_insert_dnodeint_at_index(&(Element), idx, n));
	}
	else
		return (Forward(Element->next, --idx, n));
}

/**
 * R_insert_dnodeint_at_index - Insert a node recursively.
 * @Head: Pointer to one of the nodes of the structure.
 * @idx: Index in which a node will be inserted.
 * @n: Number will be inserted.
 * Return: A pointer to a node in the structure
 */

dlistint_t *
R_insert_dnodeint_at_index(dlistint_t **Head, unsigned int idx, int n)
{
	if (*Head && (*Head)->prev && idx != 0 && idx != STATE)
		*Head = Back_Go((*Head)->prev, idx, n);
	if (*Head && !(*Head)->prev && (*Head)->next && idx)
	{
		return (Forward((*Head)->next, --idx, n));
	}
	else if (!idx || idx == STATE || !(*Head)->next)
	{
		dlistint_t *New_Element;

		New_Element = (dlistint_t *)malloc(sizeof(dlistint_t));
		New_Element->n = n;
		if (!*Head)
		{
			New_Element->next = (*Head);
			New_Element->prev = (*Head), (*Head) = New_Element;
			return (New_Element);
		}
		else if (!(*Head)->prev && !idx)
		{
			New_Element->next = (*Head);
			New_Element->prev = (*Head)->prev;
			(*Head)->prev     = New_Element, (*Head) = New_Element;
			return (New_Element);
		}
		else if (idx == STATE || idx == 1)
		{
			New_Element->next = (*Head)->next;
			New_Element->prev = (*Head);
			(*Head)->next = New_Element;
		}
		else
		{
			New_Element->next   = (*Head);
			New_Element->prev   = (*Head)->prev;
			(*Head)->prev->next = New_Element;
			(*Head)->prev = New_Element;
		}
		return (New_Element);
	}
	return ((*Head));
}

/**
 * listint_len - function that Counter all the elements of a
 *                dlistint_t list.
 * @Element: pointer to a structure.
 * @Counter: Number of nodes.
 * Return: Return: the number of nodes.
 */

size_t listint_len(dlistint_t *Element, size_t Counter)
{
	if (!Element)
		return (Counter);
	else
		return (listint_len(Element->next, ++Counter));
}

/**
 * insert_dnodeint_at_index - Insert a node recursively.
 * @Head: Pointer to one of the nodes of the structure.
 * @idx: Index in which a node will be inserted.
 * @n: Number will be inserted.
 * Return: A pointer to a node in the structure
 */

dlistint_t *
insert_dnodeint_at_index(dlistint_t **Head, unsigned int idx, int n)
{
	if (!Head)
		return (NULL);
	else if (idx <= listint_len(*Head, 0))
		return (R_insert_dnodeint_at_index(Head, idx, n));
	else
		return (NULL);
}
