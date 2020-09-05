#include "lists.h"

/**
 * Print_Recursive_Rigth - Function that prints the content of the structure.
 * @Element: Variable that stores the address of the elements of the
 *           structure, as the function calls itselt.
 * @Counter: Saves the number the penultimate call to recursion that is
 *           equivalent to the number of nodes.
 * Return: Return the number of nodes.
 */

size_t Print_Recursive_Rigth(const dlistint_t *Element, size_t Counter)
{
	if (!Element)
		return (Counter);
	return (Print_Recursive_Rigth(Element->next, ++Counter));
}

/**
 * Print_Recursive_Left- Function that prints nodes to the left from a
 *                       starting point.
 * @Element: Variable that stores the address of the elements of the
 *           structure, as the function calls itselt.
 * @Counter: Saves the number the penultimate call to recursion that is
 *           equivalent to the number of nodes.
 * Return: Return the number of nodes.
 */

size_t Print_Recursive_Left(const dlistint_t *Element, size_t Counter)
{
	if (!Element)
		return (Counter);
	return (Print_Recursive_Left(Element->prev, ++Counter));
}

/**
 * dlistint_len - function that Counter all the elements of a
 *                dlistint_t list.
 * @Head: pointer to a structure.
 * Return: Return: the number of nodes.
 */

size_t dlistint_len(const dlistint_t *Head)
{
	size_t Counter = 0;

	if (!Head)
		return (Counter);
	if (!Head->prev)
		Counter = Print_Recursive_Rigth(Head, 0);
	else
	{
		Counter = Print_Recursive_Rigth(Head, 0);
		Counter = Print_Recursive_Left(Head->prev, Counter);
	}
	return (Counter);
}
