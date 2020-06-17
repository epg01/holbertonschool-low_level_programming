#include "holberton.h"

#define LIMIT_NUMBER   4000000

/*
 * Prototype of the function or declaration of the function.
 */

void PrintResult(unsigned long int TotalResult);

/**
 * main - program that finds and prints the sum of the even-valued terms
 * Return: Successful exit.
 */

int main(void)
{
	unsigned long int Total_Result = 0, Number = 1;
	unsigned long int Counter = 2;

	while (Counter <= LIMIT_NUMBER)
	{
		if (!(Counter % 2))
			Total_Result += Counter;
		Counter += Number;
		Number = Counter - Number;
	}
	PrintResult(Total_Result);
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
