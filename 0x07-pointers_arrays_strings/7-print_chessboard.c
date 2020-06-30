#include "holberton.h"

#define SIZETABLE   8

/**
 * print_chessboard - Function that prints the chessboard.
 * @
 */

void print_chessboard(char (*Pointer_Between_1_N_Array)[8])
{
	unsigned char SolveCharacter, State1, State2, State3;
	signed   char Number_Of_Column;
	unsigned char Number_Of_Line;

	State1 = State2 = State3 = 1;
	Number_Of_Column = Number_Of_Line = SIZETABLE;
	SolveCharacter = 0;

	while (Number_Of_Line || SolveCharacter == '\n')
		if ((Number_Of_Column >= 0) && (State1))
		{
			SolveCharacter = (*Pointer_Between_1_N_Array)
				[SIZETABLE - Number_Of_Column--];
			State1 = 0;
		}
		else if ((Number_Of_Column == -1) && State2)
		{
			Number_Of_Column = SIZETABLE, Number_Of_Line--;
			SolveCharacter = '\n', State2 = 0, Pointer_Between_1_N_Array++;
		}
		else
			_putchar(SolveCharacter), State2 = State1 = 1, SolveCharacter = 0;
}
