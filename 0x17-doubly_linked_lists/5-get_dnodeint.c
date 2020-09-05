#include "lists.h"

/**
 * get_dnodeint_at_index -  function that free a dlistint_t list.
 * @Element: Pointer to structure.
 * @Index: Number.
 * Return: if the node does not exist, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *Element, unsigned int Index)
{
	if (!Index || !Element)
		if (!Element)
			return (NULL);
		else
			return (Element);
	else
		return (get_dnodeint_at_index(Element->next, --Index));
}
