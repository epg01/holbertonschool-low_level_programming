#include <stdio.h>
#include "holberton.h"

#define MENSAJE "Error\n"

/**
 * main - Program that adds positive numbers.
 * @argv: Doble pointer.
 * @argc: Counter.
 * Return: If one of the number contains symbols that are not digits,
 *         print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		if (*argv++)
		{
			int _atoi(char []);
			void print_number(int);
			int _isdigit(char *);
			int Counter = 0;

			while (*argv && (_isdigit(*argv)))
				Counter += _atoi(*argv++);
			if (!(*argv))
			{
				print_number(Counter);
				putchar('\n');
				return (0);
			}
			else
			{
				char *Pointer_To_Mensaje = MENSAJE;

				while (*Pointer_To_Mensaje)
					_putchar(*Pointer_To_Mensaje++);
				return (1);
			}
		}
		else
		{
			putchar('0');
			putchar('\n');
			return (0);
		}
	}
	else
		return (-1);

}

#define Pointer_Be_A_Digit(x) (((x) >= ('0')) && ((x)) <= ('9'))

/**
 * _isdigit - Check if a character is a digit or not.
 * @Pointer: Pointer a un char
 * Return: Returns 0 if it is not a digit and 1 if it is.
 */

int _isdigit(char *Pointer)
{
	while (*Pointer)
	{
		if (Pointer_Be_A_Digit(*Pointer))
			return (1);
		else
			return (0);
	}
	return (0);
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
