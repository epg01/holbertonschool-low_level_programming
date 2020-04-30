#include <stdio.h>

/**
 * main - Print the alphabet less the letter e and q.
 *
 * Return: exit successful.
 */

int main(void)
{
	char AlphabetLowerCase;

	AlphabetLowerCase = 'a';
	for (; AlphabetLowerCase != ('\n' + 1); ++AlphabetLowerCase)
	{
		if (AlphabetLowerCase == ('z' + 1))
			AlphabetLowerCase = '\n';
		if ((AlphabetLowerCase != 'e') && (AlphabetLowerCase != 'q'))
			putchar(AlphabetLowerCase);
	}
	return (0);
}
