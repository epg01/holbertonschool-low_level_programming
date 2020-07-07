#include "holberton.h"

/**
 * create_array - Function that creates an array of chars, and
 *                initializes it with a specific char.
 * @Size: Array size.
 * @Character: Data that is stored in the array.
 * Return: Returns NULL if size = 0
 *         Returns a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int Size, char Character)
{
	if (Size)
	{
		char *Pointer_To_Char;

		Pointer_To_Char = (char *)malloc(Size * sizeof(char));

		if (!Pointer_To_Char)
		{
			free(Pointer_To_Char);
			return (NULL);
		}
		else
		{
			unsigned int Temp = Size;

			while (Size-- > 0)
				*Pointer_To_Char++ = Character;

			return (Pointer_To_Char - Temp);
		}
	}
	else
		return (NULL);
}
