#include "holberton.h"
/**
 * wildcmp - compares two strings that can have the * special character.
 *
 * @s1: the 1st string that will be compared.
 *
 * @s2: the 2nd string that will be compared.
 *
 *Return: if the strings can be considered identical 1.
 *  otherwise 0.
 *
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s1 == '*' || *s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (0);
}
