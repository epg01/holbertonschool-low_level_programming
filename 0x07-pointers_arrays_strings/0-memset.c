#include "holberton.h"

/**
 * _memset - Function that fills memory with a constant byte.
 * @Array: Pointer to the array to be changed, by the Pattern variable.
 * @Size: How many times is the array pointed to by the Array variable entered.
 * @Pattern: Pattern that is inserted into what the Array points to.
 * Return: Returns the start of the pointer.
 */

char *_memset(char *Array, char Pattern, unsigned int Size)
{
	while (Size--)
		Array[Size] = Pattern;
	return (Array);
}
