#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @Pointer_Running_Lista: Pointer running through the list
 * Return: Returns the number of items in the list.
 */

size_t print_list(const list_t *Pointer_Running_Lista)
{
	size_t Number_Of_Struct = 0;

	while (Pointer_Running_Lista)
	{
		if (Pointer_Running_Lista->str)
			printf("[%d] %s\n", Pointer_Running_Lista->len, Pointer_Running_Lista->str);
		else
			write(1, "[0] (nil)\n", 10);
		Pointer_Running_Lista = Pointer_Running_Lista->next;
		Number_Of_Struct++;
	}
	return (Number_Of_Struct);
}
