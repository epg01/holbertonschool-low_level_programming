#include "holberton.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: array to be concatenated with the src variable.
 * @src: Variable that contains the data to be concatenated with dest.
 * Return: Returns the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	unsigned char State = 1;
	char *Pointer_To_the_Start = dest;

	while (*src)
	{
		if (*dest && State)
		{
			dest++;
			continue;
		}
		else if (!(*dest) && State)
			State = 0;
		else if (*src)
			*dest++ = *src++;
	}
	*dest = '\0';
	return (Pointer_To_the_Start);
}
