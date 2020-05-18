#include "holberton.h"

/**
 *  print_alphabet - function that prints the alphabet, in lowercase,
 *                   followed by a new line
 * @x: It is related to the macro.
 */

/*
 * A macro was defined
 */

#define WHILECONDITION(x)(((x) >= 'a' && ((x) <= 'z')) || !((x) == ('\n' + 1)))

void print_alphabet(void)
{
	unsigned char SolveCharacter;

	SolveCharacter = 'a';

/*
 * This function only works with the character set of the ASCII set, since
 * the letters of the alphabet are consecutive and among these there are no
 * other characters that do not belong to the alphabet.
 */
	while (WHILECONDITION(SolveCharacter))
	{
		_putchar(SolveCharacter++);
		if (SolveCharacter == ('z' + 1))
			SolveCharacter = '\n';
	}
}
