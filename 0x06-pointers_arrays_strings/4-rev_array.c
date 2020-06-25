#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integer.
 * @Pointer_Start: Pointer to array type int.
 * @Size_Array: Size Array.
 */

void reverse_array(int *Pointer_Start, int Size_Array)
{
	if (Size_Array)
	{
		int temp, *Pointer_Last;

		Pointer_Last = Pointer_Start, Pointer_Last += (Size_Array - 1);

		while (Pointer_Start < Pointer_Last)
		{
			temp = *Pointer_Last;
			*Pointer_Last-- = *Pointer_Start;
			*Pointer_Start++ = temp;
		}
	}
}
