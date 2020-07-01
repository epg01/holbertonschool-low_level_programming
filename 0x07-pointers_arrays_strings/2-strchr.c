#include "holberton.h"

#define NULL 0

/**
 * *_strchr - Function that locates a character in a string.
 * @s: Pointer to an array of characters.
 * @c: Pattern data to look for in the variable Array Character.
 * Return: Returns a pointer to the first occurrence of the character
 *         c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
		if (*s != c)
			s++;
		else if (*s == c)
			break;
	return ((*s) ? s : NULL);
}
