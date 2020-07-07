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
	unsigned int _Strlen(char *);
	void _strcat(char *, char *, char *);

	if (s1 && s2)
	{
		char *Pointer = (char *)malloc((_Strlen(s1) + _Strlen(s2) + 1) * sizeof(char));

		if (Pointer)
		{
			_strcat(s1, s2, Pointer);
			return (Pointer);
		}
		else
		{
			free (Pointer);
			return (NULL);
		}
	}
	else if (s1 && !s2)
	{
		char *Pointer = (char *)malloc((_Strlen(s1) + 1) * sizeof(char));

                if (Pointer)
		{
			_strcat(s1, s2 , Pointer);
			return (Pointer);
		}
		else
		{
			free(Pointer);
			return (NULL);
		}
	}
	else if (!s1 && s2)
	{
                char *Pointer = (char *)malloc((_Strlen(s2) + 1) * sizeof(char));

		if (Pointer)
		{
			_strcat(s1, s2, Pointer);
			return (Pointer);
		}
		else
		{
			free(Pointer);
			return (NULL);
		}
	}
	else if (!s1 && !s2)
	{
		char *Pointer = (char *)malloc(sizeof(char));

		if (Pointer)
		{
			*Pointer = '\0';
			return (Pointer);
		}
		else
		{
			free(Pointer);
			return (NULL);
		}
	}
	else
		return (NULL);
}

/**
 * _strcat - Function that concatenates two strings.
 * @Strgin1:
 * @String2: Variable that contains the data to be concatenated with dest.
 * Return: Returns the concatenated string.
 */

void _strcat(char *String1, char *String2, char *Pointer)
{
	char State = 1;

	while (State)
		if (String1 && *String1)
			*Pointer++ = *String1++;
		else if (String2 && *String2)
			*Pointer++ = *String2++;
		else
			State = 0;
	*Pointer = '\0';
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
