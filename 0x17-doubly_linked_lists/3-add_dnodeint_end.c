#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 *                    dlistint_t list.
 * @Element: Pointer to pointer.
 * @Number: Data to insert.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **Element, const int Number)
{
	if (!(*Element) || !(*Element)->next)
	{
		dlistint_t *New_Element = NULL;

		New_Element = (dlistint_t *)malloc(sizeof(dlistint_t));

		if (!(New_Element))
			return (NULL);
		New_Element->n    = Number;
		New_Element->prev = *Element;
		if (!(*Element))
		{
			New_Element->next = (*Element);
			(*Element)        = New_Element;
		}
		else
		{
			New_Element->next = (*Element)->next;
			((*Element)->next)  = New_Element;
		}
		return (New_Element);
	}
	else
		return (add_dnodeint_end(&(*Element)->next, Number));
}
