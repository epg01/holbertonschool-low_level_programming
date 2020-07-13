#include "holberton.h"

/**
 * string_nconcat - Function that concatenates two strings.
 * @n: followed by the first n bytes of s2, and null terminated.
 * @s1: Contains string 1.
 * @s2: Contains string 1.
 * Return: Returns Null or memory if there is.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *Length_Str(char *s2, unsigned int n, int Counter_Length);

	char *Pointer_To_s1 = Length_Str(s1, n, TERMINADOR);

	if (Pointer_To_s1)
	{
		char *Pointer_Start = Pointer_To_s1;

		while (n)
			if (*s1)
				*Pointer_To_s1++ = *s1++;
			else if (*s2)
				*Pointer_To_s1++ = *s2++, n--;
		Pointer_To_s1 = '\0';
		return (Pointer_Start);
	}
	else
		return (NULL);
}

/**
 * Length_Str - Memory allocation function.
 * @s1: Contiene el string s1.
 * @n: followed by the first n bytes of s2, and null terminated.
 * @Counter_Length: String length s1 without counting null.
 * Return: Returns Null or memory if there is.
 */

char *Length_Str(char *s1, unsigned int n, int Counter_Length)
{
	if (!(*s1))
	{
		char *Pointer_To_Stor;

		Pointer_To_Stor = malloc((Counter_Length + n) * sizeof(char));

		return (Pointer_To_Stor);
	}
	else
		return (Length_Str(++s1, n, ++Counter_Length));
}
