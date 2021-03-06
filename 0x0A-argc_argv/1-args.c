#include <stdio.h>
#include "holberton.h"

/**
 * main - Program that prints the number of arguments passed into it.
 * @argc: Counter.
 * @argv: Doble pointer.
 * Return: Returns 0 if the output is successful -1, where
 *         argc only contains one argument.
 */

int main(int argc, char *argv[])
{
	void print_number(int);

	if (argc)
	{
		int Counter = 0;

		while (*argv++)
			Counter++;
		print_number(Counter - 1);
		_putchar('\n');

		return (0);
	}
	else
		return (-1);
}

#define POWER_OF_10    10

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
