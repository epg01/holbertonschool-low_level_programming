#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list.
 * @Element: Pointer to data structure.
 */

void free_dlistint(dlistint_t *Element)
{
	if (Element)
	{
		dlistint_t *Old_Element = NULL;

		Old_Element = Element;
		Element     = Element->next;
		free(Old_Element);
		free_dlistint(Element);
	}
}
