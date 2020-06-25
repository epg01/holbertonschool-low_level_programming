#include "holberton.h"

/**
 * cap_string - Function that capitalizes all words of a string.
 * @String_Character: Stores the character string that is modified.
 * Return: We return the start of the string.
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		if (
			(
				s[i] == ' '
				|| s[i] == '\t'
				|| s[i] == '\n'
				|| s[i] == ','
				|| s[i] == ';'
				|| s[i] == '.'
				|| s[i] == '!'
				|| s[i] == '?'
				|| s[i] == '"'
				|| s[i] == '('
				|| s[i] == ')'
				|| s[i] == '{'
				|| s[i] == '}'
				)&& (s[i + 1] > 'a'
				     &&s[i + 1] < 'z')
			)
		{
			s[i + 1] -= 32;
		}
	}

	return (s);

}
