#include "holberton.h"

/*
 *  Here are the function declarations (prototype)
 */

void Print9_To_99(int SolveProduct);
void PrintNumberMoreThan99(int SolveProduct);
void PrintNumber(int SolveProduct);
void PrintCharacteresOfSpace(int Accountant, int Number);

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @Number: Tabla size.
 */

void print_times_table(int Number)
{
	if (Number >= 0 && Number <= 15)
	{
		int NumberOfLine = 0, NumberOfColumn = 0;
		int SolveProduct1, SolveProduct2;

		while (NumberOfLine <= Number)
		{
			SolveProduct1 = NumberOfLine * NumberOfColumn;
			SolveProduct2 = NumberOfLine * (NumberOfColumn + 1);

			if (SolveProduct1 <= 9)
				PrintNumber(SolveProduct1);
			else if (SolveProduct1 <= 99)
				Print9_To_99(SolveProduct1);
			else
				PrintNumberMoreThan99(SolveProduct1);
			if (SolveProduct1 <= 9 && SolveProduct2 <= 9)
				PrintCharacteresOfSpace(4, Number);
			else if (SolveProduct2 <= 99 && SolveProduct1 <= 99)
				PrintCharacteresOfSpace(3, Number);
			else
				PrintCharacteresOfSpace(2, Number);

			NumberOfColumn++;
			if (NumberOfColumn == (Number + 1))
				NumberOfColumn = 0, NumberOfLine++;
		}
	}
}

/**
 * Print9_To_99 - Function to print numbers from 10 to 100.
 * @SolveProduct: The number to be printed.
 */

void Print9_To_99(int SolveProduct)
{
/*
 * Declaration of variables.
 */
	char Accountant, SolveCharacter;
/*
 * Initialization of the variables.
 */
	Accountant = 1;
	SolveCharacter = SolveProduct / 10 + '0';

	while (Accountant-- >= 0)
	{
		_putchar(SolveCharacter);
		SolveCharacter = SolveProduct % 10 + '0';
	}
}

/**
 * PrintNumberMoreThan99 - Function to print numbers from 100 to 999.
 * @SolveProduct: The number to be printed.
 */

void PrintNumberMoreThan99(int SolveProduct)
{

/*
 * Declaration of variables.
 */
	char Accountant, SolveCharacter;
	char PowerOf10;
/*
 * Initialization of the variables.
 */
	Accountant = 3, PowerOf10 = 100;

	while (Accountant-- > 0)
	{
		SolveCharacter = SolveProduct / PowerOf10 + '0';
		SolveProduct = SolveProduct % PowerOf10, PowerOf10 /= 10;
		_putchar(SolveCharacter);
	}
}

/**
 * PrintNumber - Print the decimal numbers.
 * @SolveProduct: Number to be printed.
 */

void PrintNumber(int SolveProduct)
{
	_putchar(SolveProduct % 10 + '0');
}

/**
 * PrintCharacteresOfSpace - Function that prints characters that are not
 *                           numbers.
 * @Accountant: It tells us how many times these characters will be printed.
 * @Number: Our line break indicator.
 */

void PrintCharacteresOfSpace(int Accountant, int Number)
{
	char SolveCharacter;
	static int Identificador;

	Identificador++;

	if (Identificador ==  Number + 1)
		Identificador = 0, SolveCharacter = '\n';
	else
		SolveCharacter = ',';
	while (Accountant-- > 0 && !(SolveCharacter == '\n' + 1))
	{
		_putchar(SolveCharacter);

		if (SolveCharacter == '\n')
			SolveCharacter++;
		else
			SolveCharacter = ' ';
	}

}
