#include "holberton.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 *                      followed by a new line.
 */

void print_most_numbers(void)
{
	unsigned char SolveCharacter;

	SolveCharacter = '9';
	while (!(SolveCharacter == '\n' + 1))
	{
		putchar(SolveCharacter);
		if ((SolveCharacter > '0') && (SolveCharacter <= '9'))
			SolveCharacter--;
		else if (SolveCharacter == '0')
			SolveCharacter = '\n';
		else if (SolveCharacter == '\n')
			SolveCharacter++;
	}
}
