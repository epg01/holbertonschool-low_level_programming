#include "holberton.h"

/**
 * _strcpy - function that copies the string pointed to by src, including the
 *           terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: variable to which the data is passed.
 * @src: Variable to which the data will be copied.
 * Return: the content of the variable dest is returned.
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while ((*dest++ = *src++))
		;
	return (temp);
}
