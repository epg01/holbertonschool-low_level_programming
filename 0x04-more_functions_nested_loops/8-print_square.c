#include "holberton.h"

/**
 * print_square - Function that prints a square, followed by a new line.
 * @Size_Of_The_Square: Integer type variable that indicates the size of
 *                      the square to be printed.
 */

void print_square(int Size_Of_The_Square)
{
	unsigned char SolveCharacter, State = 1, State0 = 1;
	unsigned char Number_Line, Number_Column;

	Number_Line = Number_Column = 0;

	while (State)
	{
		if (Size_Of_The_Square <= 0 && State0)
			SolveCharacter = '\n', State0 = 0;
		else if (Number_Column < Size_Of_The_Square)
			SolveCharacter = '#', Number_Column++;
		else if (Number_Column == Size_Of_The_Square)
			Number_Column = 0, Number_Line++, SolveCharacter = '\n';

		_putchar(SolveCharacter);

		if (Size_Of_The_Square <= 0)
			break;
		else if (!State || Number_Line == Size_Of_The_Square)
			State = 0;
	}
}
