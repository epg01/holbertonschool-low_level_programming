#include "holberton.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: Character string to compare with s2.
 * @s2: Character string to compare with s1.
 * Return: Return the difference.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
		if (*s1 == *s2)
			s1++, s2++;
		else
			return (*s1 - *s2);
	return (0);

}
