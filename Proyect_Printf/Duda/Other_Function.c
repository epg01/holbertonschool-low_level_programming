#include "holberton.h"

const char **
Isdigit(const char **String)
{
	(*String)++;

	while ((**String))
	{
		if ((**String) == ' ' || (**String) == '\t')
			(*String)++;
		else
			return (&*(String));
	}
	return (&*(String));
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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


/**
 * print_number - prints an integer char by char
 * @Number: The integer to print
 */

void print_number_unsigned(long int Number)
{
	int  SolveCharacter;
	long int PowerOf10;
	unsigned char State, State0;

	State = PowerOf10 =  State0 = 1, SolveCharacter = 0;

	while (PowerOf10)
	{
		if (((Number / PowerOf10) >= POWER_OF_10) && (State))
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
			PowerOf10 /= POWER_OF_10;
		}
		if (SolveCharacter)
			_putchar(SolveCharacter);
	}
}

int Print_Binario(int Number, int Legth_Of_Characer_impresos)
{
        if ((Number / 2) == 1)
	{
		int Number2 = Number / 2 + '0';

		write(1, &Number2,1);

		Number = Number % 2 + '0';
		write(1, &Number, 1);
		return (Legth_Of_Characer_impresos + 2);
	}
	if ((Number / 2) == 0)
	{
		Number = Number % 2 + '0';
		write(1, &Number,1);
                return (Legth_Of_Characer_impresos + 1);
	}
	else
		Legth_Of_Characer_impresos = Print_Binario(Number / 2, ++Legth_Of_Characer_impresos);

	Number = Number % 2 + '0';
	write(1, &Number, 1);
	return (Legth_Of_Characer_impresos);
}
