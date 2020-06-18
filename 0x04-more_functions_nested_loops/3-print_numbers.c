#inclide "holberton.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 *                 followed by a new line.
 */

void print_numbers(void)
{
	unsigned char SolveCharacter;

	SolveCharacter = 0;

	while (!(SolveCharacter == '\n' + 1))
	{
		putchar(SolveCharacter + '0');
		if (!(SolveCharacter >= '0' && SolveCharacter <= '9'))
			SolveCharacter = '\n';
		else if (SolveCharacter == '\n')
			SolveCharacter++;
		else
			SolveChracter++;
	}
}
