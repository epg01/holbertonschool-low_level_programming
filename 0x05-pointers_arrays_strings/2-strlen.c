#include "holberton.h"

/**
 * _strlen - Function that returns the length of a string.
 * @String_Character: Variable that stores the length to find.
 * Return: Return of the length
 */

int _strlen(char *String_Character)
{
	unsigned char Counter_String_Character = 0;

	while (*String_Character++)
		Counter_String_Character++;
	return (Counter_String_Character);
}
