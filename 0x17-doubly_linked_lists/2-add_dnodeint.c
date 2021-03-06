#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a
 *                  dlistint_t list
 * @Element : Pointer to Pointer.
 * @Number: Data to insert at the end.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **Element, const int Number)
{
	if (!(*Element) || !(*Element)->prev)
	{
		dlistint_t *New_Element = NULL;

		New_Element = malloc(sizeof(dlistint_t));
		if (!New_Element)
			return (NULL);

		New_Element->n = Number;
		New_Element->next = *Element;
		if (*Element)
		{
			New_Element->prev = (*Element)->prev;
			(*Element)->prev = New_Element;
		}
		else
			New_Element->prev = NULL;
		(*Element) = New_Element;
		return (New_Element);
	}
	else
		return (add_dnodeint(&(*Element)->prev, Number));
}
