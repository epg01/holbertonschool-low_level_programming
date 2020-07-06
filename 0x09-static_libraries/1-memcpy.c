#include "holberton.h"

/**
 * _memcpy - Function that copies memory area.
 * @dest: Variable containing the address of the array to be changed.
 * @src: Data to be entered in the array pointed to by dest.
 * @n: Number of times this change will be made.
 * Return: the address of the first element pointed to by dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		dest[n] = src[n];
	return (dest);
}
