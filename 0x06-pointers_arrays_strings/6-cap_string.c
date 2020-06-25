#include "holberton.h"

/**
 * cap_string - Function that capitalizes all words of a string.
 * @String_Character: Stores the character string that is modified.
 * Return: We return the start of the string.
 */

char *cap_string(char *String_Character)
{
	char *Pointer_Start = String_Character;

	while (*String_Character)
		if (*String_Character == ' '  || *String_Character == ','  ||
		    *String_Character == '.'  || *String_Character == '!'  ||
		    *String_Character == '\t' || *String_Character == '\n' ||
		    *String_Character == '\"' || *String_Character == '('  ||
		    *String_Character == ')'  || *String_Character == '{'  ||
		    *String_Character == '}'  || *String_Character == '?'  ||
		    *String_Character == ';')
		{
			if (*String_Character == '\t')
				*String_Character = ' ';
			if (*(String_Character + 1) >= 'a' && *(String_Character + 1) <= 'z')
				*(String_Character + 1) += ('A' - 'a'), String_Character++;
			else
				String_Character++;
		}
		else
			String_Character++;
	return (Pointer_Start);
}
