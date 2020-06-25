#include "holberton.h"

/**
 * _strncpy - Function that concatenates two strings.
 * @dest: array to be concatenated with the src variable.
 * @src: Variable that contains the data to be concatenated with dest.
 * @n: Byte number of string src.
 * Return: Returns the concatenated string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *Pointer_To_the_Start = dest;
	char *Pounter_To_the_n = dest + n;

	while (dest <= Pounter_To_the_n && n)
	{
		if (*src && n)
			*dest++ = *src++, n--;
		else if (n)
			*dest++ = '\0';

	}
	return (Pointer_To_the_Start);
}
