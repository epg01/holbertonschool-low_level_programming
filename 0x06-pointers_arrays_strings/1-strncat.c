#include "holberton.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: array to be concatenated with the src variable.
 * @src: Variable that contains the data to be concatenated with dest.
 * Return: Returns the concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned char State = 1;
	char *Pointer_To_the_Start = dest;

	while (*src && n)
	{
		if (*dest && State)
		{
			dest++;
			continue;
		}
		else if (!(*dest) && State)
			State = 0;
		else if (*src)
			*dest++ = *src++, n--;
	}
	*dest = '\0';
	return (Pointer_To_the_Start);
}
