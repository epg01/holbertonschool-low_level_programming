#include "holberton.h"

/*
 * The symbolic constants used in the print_to_98 function are
 * declared, I treat this as my main function.
 */

#define NUMBER_BETWEEN_0_AND_9(Number) (((Number) >= (0)) && ((Number) <= (9)))
#define NUMBER_BEYOND_98(Number1) ((Number1) > (98))
#define NUMBER_LESS_10(Number2) ((Number2) < (0))
#define NUMBER_BETWEEN_9_AND_97(Numb) (((Numb) > (9)) && ((Numb) < (98)))
#define NEGATIVE_THE_1_AND_9(Numb3) (((Numb3) < (0)) && ((Numb3) < (-10)))

/*
 * The functions to be used are declared.
 */

void print_between_0_9(int Number);
void print_between_9_97(int Number);
void print_Beyond_98(int Number);
void print_Less_10(int Number);

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
		if (NUMBER_BETWEEN_0_AND_9(Number))
			print_between_0_9(Number++);
		else if (NUMBER_BETWEEN_9_AND_97(Number))
			print_between_9_97(Number++);
		else if (NUMBER_BEYOND_98(Number))
			print_Beyond_98(Number--);
		else if (NEGATIVE_THE_1_AND_9(Number))
			print_between_The_Negative_0_9(Number++);
		else if (NUMBER_LESS_10(Number))
			print_Less_10(Number++);
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
 * print_between_0_9 - Function that prints from 0 to 9.
 * @Number: variable type int.
 */

void print_between_0_9(int Number)
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

/**
 * print_between_9_97 - Function that prints from 10 to 90
 * @Number: Variable type int.
 */

void print_between_9_97(int Number)
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
 * print_Less_10 - Function that prints numbers less than 10.
 * @Number: Variable type int.
 */

void print_Less_10(int Number)
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
