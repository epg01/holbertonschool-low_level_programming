#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: array of ints
 * @size: size of array
 * @cmp: pointer to a function that compares values
 *
 * Return: the int wanted.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j;

	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (j = 0; j < size; j++)
	{
		i = (*cmp)(array[j]);
		if (i != 0)
			break;
	}
	if (j == size && i == 0)
		return (-1);
	return (j);
}
