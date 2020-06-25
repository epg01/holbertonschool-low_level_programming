#include "holberton.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: array to be concatenated with the src variable.
 * @src: Variable that contains the data to be concatenated with dest.
 * @n: Byte number of string src.
 * Return: Returns the concatenated string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *Pointer_To_the_Start = dest;

	while (n && *src)
		*dest++ = *src++, n--;
	if (!*src)
		*dest = '\0';
	return (Pointer_To_the_Start);
}
