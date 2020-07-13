#include "holberton.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @Size_Array: Size of the memory cells to return.
 * Return: Returns a pointer to the allocated memory
 *         If malloc fails, the malloc_checked function should cause normal
 *         process termination with a status value of 98
 */

void *malloc_checked(unsigned int Size_Array)
{
	void *Pointer_G;

	Pointer_G = malloc(sizeof(Size_Array));

	if (Pointer_G)
		exit(98);
	else
		return (Poiner_G)
}
