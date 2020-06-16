#include "holberton.h"

void PrintResult(unsigned long int TotalResult);

#define NUMBER_LIMIT   1024

/**
 * main -  program that computes and prints the sum of all the multiples
 *           of 3 or 5 below 1024 (excluded)
 * Return: satisfactory output.
 */

int main(void)
{
	unsigned long int TotalResult = 0;
	unsigned long int Counter;

	Counter = NUMBER_LIMIT;

	while (Counter-- > 0)
	{
		if (!(Counter % 3) || !(Counter % 5))
			TotalResult += Counter;
	}
	PrintResult(TotalResult);
	return (0);
}

/**
 * PrintResult - Function that prints the total result of the sum.
 * @TotalResult: Stores the data to be printed.
 */

void PrintResult(unsigned long int TotalResult)
{
	unsigned char SolveCharacter = 0;
	unsigned char State0 = 1;
	unsigned long int PowerOf10 = 10;

	while (SolveCharacter != ('\n' + 1))
	{
		if ((TotalResult / PowerOf10) && (State0 == 1))
		{
			PowerOf10 *= 10;
			continue;
		}
		else if (State0 == 1)
			State0 = 0;
		else if (!(PowerOf10 == 1))
		{
			PowerOf10 /= 10;
			SolveCharacter = TotalResult / PowerOf10 + '0';
			TotalResult %= PowerOf10;
		}
		else if (SolveCharacter != '\n')
		{
			SolveCharacter = '\n';
		}
		else if (!(SolveCharacter != '\n'))
			SolveCharacter++;

		if ((SolveCharacter != 0) && !(SolveCharacter == '\n' + 1))
			_putchar(SolveCharacter);
	}
}
