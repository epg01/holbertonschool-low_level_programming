#include "holberton.h"


#define POWER_OF_10    10


/**
 * print_number - prints an integer char by char
 * @Number: The integer to print
 */

void print_number(int Number)
{
	unsigned long int  SolveCharacter, PowerOf10;
	unsigned char State;

	State = PowerOf10 =  1, SolveCharacter = 0;

	while (PowerOf10)
	{
		if (Number < 0)
		{
			SolveCharacter = '-';
			Number *= (-1);
		}
		else if (((Number / PowerOf10) >= POWER_OF_10) && (State))
		{
			PowerOf10 *= POWER_OF_10;
			continue;
		}
		else if (State)
		{
			State = 0;
			continue;
		}
		else if (POWER_OF_10)
		{
			SolveCharacter = (Number / PowerOf10) % POWER_OF_10 + '0';
			PowerOf10 /= POWER_OF_10;
		}
		if (SolveCharacter)
			_putchar(SolveCharacter);
	}
}
