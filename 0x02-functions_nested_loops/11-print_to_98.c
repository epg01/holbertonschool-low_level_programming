#include "holberton.h"

/*
 * The symbolic constants used in the print_to_98 function are
 * declared, I treat this as my main function.
 */

#define NUMBER_BETWEEN_0_AND_97(Number) (((Number) >= (0)) && ((Number) < 98))
#define NUMBER_BEYOND_98(Number1) ((Number1) > (98))
#define NUMBER_LESS_0(Number2) ((Number2) < (0))

/*
 * The functions to be used are declared.
 */

void print_between_0_97(int Number);
void print_Beyond_98(int Number);
void print_Less_0(int Number);

/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 *               followed by a new line.
 * @Number: variable type int.
 */

void print_to_98(int Number)
{
	unsigned char SolveCharacter, State0, State1;

	SolveCharacter = 0, State0 = State1 = 1;
	while (SolveCharacter != '\n')
	{
		if (NUMBER_LESS_0(Number))
			print_Less_0(Number++);
		else if (NUMBER_BETWEEN_0_AND_97(Number))
			print_between_0_97(Number++);
		else if (NUMBER_BEYOND_98(Number))
			print_Beyond_98(Number--);
		else if ((Number == 98) && (State0))
			SolveCharacter = Number / 10 + '0', State0 = 0;
		else if (State1)
			SolveCharacter = Number % 10 + '0', State1 = 0;
		else if (!State1)
			SolveCharacter = '\n';

		if (!State0)
			_putchar(SolveCharacter);
	}
}

/**
 * print_between_0_97 - Function that prints from 0 to 97.
 * @Number: variable type int.
 */

void print_between_0_97(int Number)
{
	if (Number < 10)
	{
		int SolveConditionOfWhile, SolveNewNumber;
		unsigned char State0, State1, SolveCharacter;

		SolveNewNumber = Number, SolveConditionOfWhile = SolveNewNumber + 1;
		State0 = State1 = 1;

		while (Number < SolveConditionOfWhile)
		{
			if (State0)
				SolveCharacter = Number % 10 + '0', State0 = 0;
			else if (State1)
				SolveCharacter = ',', State1 = 0;
			else if (SolveCharacter == ',')
				SolveCharacter = ' ';
			else if (SolveCharacter == ' ')
				Number++;

			if (!(Number == SolveConditionOfWhile))
				_putchar(SolveCharacter);
		}
	}
	else
	{
		unsigned char State0, State1, SolveCharacter;
		int SolveConditionOfWhile, SolveNewNumber;
		unsigned short int PowerOf10;

		State0 = State1 = 1;
		SolveNewNumber = Number, SolveConditionOfWhile = SolveNewNumber + 1;
		PowerOf10 = 10;

		while (Number < SolveConditionOfWhile)
		{
			if ((State0) && (Number / PowerOf10))
			{
				PowerOf10 *= 10;
				continue;
			}
			else if (!(PowerOf10 == 1))
			{
				if (State0)
					State0 = 0;
				PowerOf10 /= 10;
				SolveCharacter = SolveNewNumber / PowerOf10 + '0';
				SolveNewNumber %=  PowerOf10;
			}
			else if (State1)
				SolveCharacter = ',', State1 = 0;
			else if (SolveCharacter == ',')
				SolveCharacter = ' ';
			else if (SolveCharacter == ' ')
				Number++;

			if (!(Number == SolveConditionOfWhile))
				_putchar(SolveCharacter);
		}
	}
}

/**
 * print_Beyond_98 - Function that prints from 99 onwards.
 * @Number: Variable type int.
 */

void print_Beyond_98(int Number)
{
	unsigned char State0, State1, SolveCharacter;
	int SolveConditionOfWhile, SolveNewNumber;
	unsigned long int PowerOf10;

	State0 = State1 = 1;
	SolveNewNumber = Number, SolveConditionOfWhile = SolveNewNumber - 1;
	PowerOf10 = 10;

	while (Number > SolveConditionOfWhile)
	{
		if ((State0) && (Number / PowerOf10))
		{
			PowerOf10 *= 10;
			continue;
		}
		else if (!(PowerOf10 == 1))
		{
			if (State0)
				State0 = 0;
			PowerOf10 /= 10;
			SolveCharacter = SolveNewNumber / PowerOf10 + '0';
			SolveNewNumber %=  PowerOf10;
		}
		else if (State1)
			SolveCharacter = ',', State1 = 0;
		else if (SolveCharacter == ',')
			SolveCharacter = ' ';
		else if (SolveCharacter == ' ')
			Number--;

		if (!(Number == SolveConditionOfWhile))
			_putchar(SolveCharacter);
	}
}

/**
 * print_Less_0 - Function that prints numbers less than 0.
 * @Number: Variable type int.
 */

void print_Less_0(int Number)
{
	if (Number < -9)
	{
		unsigned char State0, State1, State2, SolveCharacter;
		int SolveConditionOfWhile, SolveNewNumber;
		unsigned long int PowerOf10;

		Number *= -1;
		State0 = State1 = State2 = 1;
		SolveNewNumber = Number, SolveConditionOfWhile = SolveNewNumber - 1;
		PowerOf10 = 10;

		while (Number > SolveConditionOfWhile)
		{
			if (State2)
				SolveCharacter = '-', State2 = 0;
			else if ((State0) && (Number / PowerOf10))
			{
				PowerOf10 *= 10;
				continue;
			}
			else if (!(PowerOf10 == 1))
			{
				if (State0)
					State0 = 0;
				PowerOf10 /= 10;
				SolveCharacter = (SolveNewNumber / PowerOf10) + '0';
				SolveNewNumber %=  PowerOf10;
			}
			else if (State1)
				SolveCharacter = ',', State1 = 0;
			else if (SolveCharacter == ',')
				SolveCharacter = ' ';
			else if (SolveCharacter == ' ')
				Number--, State2 = 1;

			if (!(Number == SolveConditionOfWhile))
				_putchar(SolveCharacter);
		}
	}
	else
	{
		int SolveConditionOfWhile, SolveNewNumber;
		unsigned char State0, State1, State2, SolveCharacter;

		Number *= -1;
		SolveNewNumber = Number, SolveConditionOfWhile = SolveNewNumber + 1;
		State0 = State1 = State2 = 1;

		while (Number < SolveConditionOfWhile)
		{
			if (State2)
				SolveCharacter = '-', State2 = 0;
			else if (State0)
				SolveCharacter = Number % 10 + '0', State0 = 0;
			else if (State1)
				SolveCharacter = ',', State1 = 0;
			else if (SolveCharacter == ',')
				SolveCharacter = ' ';
			else if (SolveCharacter == ' ')
				Number++;

			if (!(Number == SolveConditionOfWhile))
				_putchar(SolveCharacter);
		}

	}
}
