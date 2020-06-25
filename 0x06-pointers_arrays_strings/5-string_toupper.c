#include "holberton.h"

/**
 * string_toupper - Function that changes all lowercase letters of a
 *                  string to uppercase.
 * @String_Character: Array to convert to uppercase.
 * Return: Returns the first element of the pointer.
 */

char *string_toupper(char *String_Character)
{
	char *Pointer_To_The_Start = String_Character;

	while (*String_Character)
		if (*String_Character >= 'a' && *String_Character <= 'z')
			*String_Character++ += ('A' - 'a');
		else
			String_Character++;
	return (Pointer_To_The_Start);
}
