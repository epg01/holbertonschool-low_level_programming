#include <stdio.h>
/**
 * main - print the lowercase alphabet with new line.
 *
 * Return: exit successful.
 */

int main(void)
{
	char AlphabetLowercase, CharacterOfNewLine;

	AlphabetLowercase = 'a';
	CharacterOfNewLine = '\n';
	while (AlphabetLowercase != ('\n' + 1))
	{
		if (AlphabetLowercase == ('z' + 1))
			AlphabetLowercase = CharacterOfNewLine;
		putchar(AlphabetLowercase++);
	}
	return (0);
}
