#include "holberton.h"
/**
 * rot13 - Encodes a string using rot13.
 * @s: the string that will be procesed.
 * Return: a char pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i;
	int j;

	char base[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char coded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; base[j] != 0; j++)
			if (s[i] == base[j])
			{
				s[i] = coded[j];
				break;
			}

	return (s);
}
