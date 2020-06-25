#include "holberton.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: array to be concatenated with the src variable.
 * @src: Variable that contains the data to be concatenated with dest.
 * @n: Byte number of string src.
 * Return: Returns the concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned char State = 1;
	char *Pointer_To_the_Start = dest;

	if (*dest)
	{
		while (n && *src)
		{
			if (*dest && State)
				dest++;
			else if (!(*dest) && State)
				State = 0;
			else
				*dest++ = *src++, n--;
		}
	*dest = '\0';
	}
	return (Pointer_To_the_Start);
}
