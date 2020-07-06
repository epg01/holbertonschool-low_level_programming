#include "holberton.h"
#include <stdio.h>

#define MENSAJE "Error\n"
#define NUMBERCOINS 5

void print_number(int Number);
int _atoi(char []);

/**
 * main -  Program that prints the minimum number of coins to make change
 *         for an amount of money.
 * @argc:  Counter.
 * @argv:  Doble Pointer.
 * Return: If the number of arguments passed to your program is not
 *         exactly 1, print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int OfCoins_Of_Values[NUMBERCOINS] = {25, 10, 5, 2, 1}, Counter = 0, Number;

		Number = _atoi(*++argv);
		if (Number <= 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			while (Number)
			{
				if ((Number - OfCoins_Of_Values[0]) >= 0)
					Counter++, Number = Number - OfCoins_Of_Values[0];
				else if ((Number - OfCoins_Of_Values[1]) >= 0)
					Counter++, Number = Number - OfCoins_Of_Values[1];
				else if ((Number - OfCoins_Of_Values[2]) >= 0)
					Counter++, Number = Number - OfCoins_Of_Values[2];
				else if ((Number - OfCoins_Of_Values[3]) >= 0)
					Counter++, Number = Number - OfCoins_Of_Values[3];
				else if ((Number - OfCoins_Of_Values[4]) >= 0)
					Counter++, Number = Number - OfCoins_Of_Values[4];
			}
			print_number(Counter);
			putchar('\n');
			return (0);
		}
	}
	else
	{
		char *Pointer_To_Mensaje = MENSAJE;

		while (*Pointer_To_Mensaje)
			_putchar(*Pointer_To_Mensaje++);
		return (1);
	}
}

#define POWER_OF_10    10

/**
 * _atoi - Converts a string to a number.
 * @Pointer_To_Number: Pointer.
 * Return: Return the number.
 */

int _atoi(char Pointer_To_Number[])
{
	int sing, Number = 0, State = 0;

	do {
		if (!State)
			sing = (*Pointer_To_Number == '-') ? -1 : 1, State = 1;
		if ((*Pointer_To_Number == '+') || (*Pointer_To_Number == '-'))
			Pointer_To_Number++;

		Number = POWER_OF_10 * Number + (*Pointer_To_Number - '0');
	} while (*++Pointer_To_Number)
		;

	return (sing * Number);
}


/**
 * print_number - prints an integer char by char
 * @Number: The integer to print
 */

void print_number(int Number)
{
	int  SolveCharacter;
	signed int PowerOf10;
	unsigned char State, State0;

	State = PowerOf10 =  State0 = 1, SolveCharacter = 0;

	while (PowerOf10)
	{
		if ((Number < 0) && State0)
			SolveCharacter = '-', State0 = 0;
		else if (((Number / PowerOf10) >= POWER_OF_10 ||
			  (Number / PowerOf10 <= -10)) && (State))
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
			if (Number >= 0)
				SolveCharacter = (Number / PowerOf10) % POWER_OF_10 + '0';
			else
			{
				SolveCharacter = Number / PowerOf10 % 10;
				SolveCharacter *= (-1);
				SolveCharacter += '0';
			}
			PowerOf10 /= POWER_OF_10;
		}
		if (SolveCharacter)
			_putchar(SolveCharacter);
	}
}
