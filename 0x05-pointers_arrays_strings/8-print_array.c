#include "holberton.h"
#include <stdio.h>

/*
 * declaration
 */

void Print_Number(int *Puntero_Number);

/**
 * print_array - Function that prints n elements of an array of integers,
 *               followed by a new lines
 * @Pointer_Number: pointer pointing to numbers in an array.
 */

void print_array(int *Puntero_Number, int Size_Matriz)
{
	char SolveCharacter;

	while (Size_Matriz-- >= -2)
	{
		if (Size_Matriz >= 0)
			printf("%d", *Puntero_Number++);
		else if (Size_Matriz == -1)
			SolveCharacter = ('\n'), Size_Matriz--;
		else if (Size_Matriz == -2)
			SolveCharacter++, Size_Matriz--;
		if (SolveCharacter == '\n')
			putchar(SolveCharacter), Size_Matriz--;

		if (Size_Matriz > 0)
			printf(", ");
	}
}
/*
 *void Print_Number(int *Puntero_Number)
 *{
 *	signed long int Power_Of_10 = 1;
 *	unsigned char SolveCharacter = 0;
 *
 *	while ()
 *	{
 *		if (*Punter_Number / 10 > 10 && State0)
 *			Power_Of_10 *= POWER_OF_10;
 *		else if (State0)
 *			State0 = 0;
 *		else
 *		{
 *			if (*Puntero_Number < 0 && !SolveCharacter)
 *				SolveCharacter = '-';
 *			else if (Power_Of_10 >= 1)
 *			{
 *				SolveCharacter = *Puntero_Number;
 *				SolveCharacte /= (Power_Of10 % POWER_OF_10);
 *				SoveCharacter += '0';
 *				Power_Of_10 /= POWER_OF_10;
 *			}
 *			_putchar(SolveCharacter);
 *		}
 *		_putchar(',');
 *		_putchar(' ');
 *	}
 *}
 */
