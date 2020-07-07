#include "holberton.h"

/**
 * _strdup - Function that returns a pointer to a newly allocated space
 *           in memory, which contains a copy of the string
 *           given as a parameter.
 * @Str:   Pointer To Character String.
 * Return: Returns NULL if str = NULL On success, the _strdup function
 *         returns a pointer to the duplicated string. It returns NULL
 *         if insufficient memory was available.
 */

char *_strdup(char *Str)
{
	if (Str)
	{
		unsigned int _Strlen(char *Pointer_To_Str);

		char *Pointer = (char *)malloc((_Strlen(Str) + 1) * sizeof(char));

		if (!Pointer)
		{
			free(Pointer);
			return (NULL);
		}
		else
		{
			char *Temp = Pointer;

			while ((*Pointer++ = *Str++))
			;
			return (Temp);
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
