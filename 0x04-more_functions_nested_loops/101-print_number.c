#include "holberton.h"

#define POWER_OF_10   10
/**
 * print_number - Function that prints an integer.
 * @Number: Variable integer type that stores the data to be printed.
 */

void print_number(int Number)
{
	int PowerOf10 = POWER_OF_10;
	int State0 = 0, SolveCharacter, State = 1;

	SolveCharacter = Number;

	while (State)
	{
		if ((Number / PowerOf10 > 9) && !(State0))
			PowerOf10 *= POWER_OF_10;
		else
		{
			if (Number < 0)
				SolveCharacter = '-', Number *= (-1);
			else
			{
				if (Number > 9)
					SolveCharacter = Number / PowerOf10;
				SolveCharacter %= POWER_OF_10;
				SolveCharacter += '0';
				State0 = 1;
				if (!(PowerOf10 != 1) || Number <= 9)
					State = 0;
				PowerOf10 /= POWER_OF_10;
			}
			_putchar(SolveCharacter);
		}
	}
}
