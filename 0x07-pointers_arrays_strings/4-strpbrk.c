#include "holberton.h"

#define NULL 0

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: Character array.
 * @accept: Character array.
 * Return: Returns a pointer to the byte in s that matches one of the
 *         bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;

	while (*s)
		if (*accept && (*accept != *s))
			accept++;
		else if (!(*accept))
			accept = temp, s++;
		else if (*accept == *s)
			break;
	return ((*s) ? s : NULL);
}
