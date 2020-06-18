#include "holberton.h"
#define POWER_OF_10  0xA
/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14,
 *                followed by a new line.
 */
void more_numbers(void)
{
	unsigned char SolveCharacter, NumberLine, State0, State1, CounterNLine;
	int Accountant;

	NumberLine = CounterNLine = 0;
	Accountant = 0, State0 = State1 = 1;
	SolveCharacter = 0;

	while (CounterNLine < POWER_OF_10)
	{
		if (Accountant == -1)
			Accountant = 0;
		if ((Accountant < POWER_OF_10) &&  (Accountant >= 0))
			SolveCharacter = Accountant + '0', Accountant++;
		else if (Accountant >= POWER_OF_10)
		{
			if (State0 & (Accountant != 15))
			{
				SolveCharacter = Accountant / POWER_OF_10;
				SolveCharacter += '0';
				State0 = 0;
			}
			else
			{
				SolveCharacter = Accountant % POWER_OF_10;
				SolveCharacter += '0';
				State0 = 1;
				Accountant++;
			}
		}

		if (Accountant == POWER_OF_10 + 6)
		{
			SolveCharacter = '\n', Accountant = -1, NumberLine++;
			State1 = 0;
		}
		_putchar(SolveCharacter);
		if (SolveCharacter == '\n')
			CounterNLine++;
	}
}
