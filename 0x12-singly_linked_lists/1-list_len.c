#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a
 *            linked list_t list
 * @Pointer_Running_List: Pointer running trought the linked list.
 * Return: List item numbers.
 */

size_t list_len(const list_t *Pointer_Running_List)
{
	size_t Counter = 0;

	while (Pointer_Running_List)
		Counter++, Pointer_Running_List = Pointer_Running_List->next;
	return (Counter);
}
