#include "holberton.h"
/**
 * leet - Encodes a string into 1337.
 * @s: the string that will be procesed.
 * Return: a char pointer to the encoded string.
 */
char *leet(char *s)
{
	int i;
	int j;

	char *base = "aAeEoOtTlL";
	char *coded = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; base[j] != '\0'; j++)
		{
			if (s[i] == base[j])
			{
				s[i] = coded[j];
			}
		}
	}

	return (s);
}
