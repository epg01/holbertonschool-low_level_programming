#include "holberton.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 *                      followed by a new line.
 */

void print_most_numbers(void)
{
	unsigned char SolveCharacter;

	SolveCharacter = '0';
	while (!(SolveCharacter == '\n' + 1))
	{
		if (!(SolveCharacter == '2') && (SolveCharacter != '4'))
			_putchar(SolveCharacter);
		if ((SolveCharacter >= '0') && (SolveCharacter < '9'))
			SolveCharacter++;
		else if (SolveCharacter == '9')
			SolveCharacter = '\n';
		else if (SolveCharacter == '\n')
			SolveCharacter++;
	}
}
