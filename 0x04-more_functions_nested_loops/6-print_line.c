#include "holberton.h"

/**
 * print_line - Function that draws a straight line in the terminal.
 * @Number: Quantity that must be positive (includes zero) in order for the
 *          function to perform the task.
 */

void print_line(int Number)
{
	unsigned char SolveCharacter = 0;

	while (SolveCharacter != '\n' + 1)
	{
		if (Number <= 0)
			SolveCharacter = '\n';
		else
			SolveCharacter = '_';
		_putchar(SolveCharacter);
		if (SolveCharacter == '\n')
			SolveCharacter++;
		Number--;
	}
}
