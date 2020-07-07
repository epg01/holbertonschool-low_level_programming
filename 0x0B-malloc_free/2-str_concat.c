#include "holberton.h"

/**
 * str_concat - Function that concatenates two strings.
 * @s1: Character string.
 * @s2: Character string.
 * Return: If  NULL is passed, treat it as an empty string
 *         The function should return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int Counter, _Strlen(char *);
	char *Pointer_Concat;

	Counter = _Strlen(s1);
	Counter += _Strlen(s2);

	if (Counter)
	{

		Counter++;
		Pointer_Concat = (char *)malloc(Counter * sizeof(char));

		if (Pointer_Concat)
		{
			char *Temp = Pointer_Concat;

			while (*s2)
			{
				if (*s1)
					*Pointer_Concat++ = *s1++;
				else
					*Pointer_Concat++ = *s2++;
			}
			return (Temp);
		}
		else
		{
			free(Pointer_Concat);
			return (NULL);
		}
	}
	else
		return (NULL);
}


/**
 * _Strlen - Returns the length of the visible character string.
 * @Pointer_To_Str: Pointer to a character string.
 * Return: Return Length.
 */

unsigned int _Strlen(char *Pointer_To_Str)
{
	if (*Pointer_To_Str)
	{
		char *Temp = Pointer_To_Str;

		while (*Pointer_To_Str++)
			;

		return (--Pointer_To_Str - Temp);
	}
	else
		return (0);
}
