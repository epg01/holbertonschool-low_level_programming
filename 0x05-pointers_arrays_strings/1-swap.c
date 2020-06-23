#include "holberton.h"

/**
 * swap_int - Function that swaps the values of two integers.
 * @Number_2: variable to be exchanged with Number_1.
 * @Number_1: variable to be exchanged with Number_2.
 */

void swap_int(int *Number_1, int *Number_2)
{
	int Temp;

	Temp = *Number_1, *Number_1 = *Number_2, *Number_2 = Temp;
}
