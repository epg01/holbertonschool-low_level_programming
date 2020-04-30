#include <stdio.h>

/**
 * main - prints the alphabet in upper and lower case and
 *        with a line break at the end.
 * Return: exit successful.
 */

int main(void)
{
	char CharacterAphabetLowerUpperCase;

	CharacterAphabetLowerUpperCase = 'a';
	while (CharacterAphabetLowerUpperCase != ('\n' + 1))
	{
		if (CharacterAphabetLowerUpperCase == ('z' + 1))
			CharacterAphabetLowerUpperCase = 'A';
		else if (CharacterAphabetLowerUpperCase == ('Z' + 1))
			CharacterAphabetLowerUpperCase = '\n';
		putchar(CharacterAphabetLowerUpperCase++);
	}
	return (0);
}
