#include "lists.h"

/**
 *  Form_Recursive - function that returns the sum of all the data (n)
 *                   of a dlistint_t linked list.
 * @Element: Pointer to data structure
 * Suma: Suma.
 * State: State.
 * Return: if the list is empty, return 0.
 */

int Form_Recursive(dlistint_t *Element, int Suma, signed char State)
{
	if (!Element)
		return (Suma);
	else
	{
		if (!State)
		{
			Suma += Element->n;
			return (Form_Recursive(Element->next, Suma, 0));
		}
		else if (State == -1)
		{
			int Suma_Rigth = 0;

			Suma_Rigth = Form_Recursive(Element, Suma, 0);
			return (Form_Recursive(Element->prev, Suma_Rigth, 1));
		}
		else if (State == 1)
		{
			Suma += Element->n;
			return (Form_Recursive(Element->prev, Suma, 1));
		}
	}
}

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 *                dlistint_t linked list.
 * @head: Pointer to Data structure.
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);
	if (!head->prev)
		return (Form_Recursive(head, 0, 0));
	else
		return (Form_Recursive(head, 0, -1));
}
