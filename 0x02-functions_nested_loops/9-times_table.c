#include "holberton.h"

/**
 *   times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	unsigned char FirstDigit, SolveVariable;
	unsigned char NumberOfLine, NumberOfColumn, Accountant;
	unsigned char NumberOf_1_9;

	NumberOf_1_9 = 1;
	FirstDigit = '0', NumberOfLine = NumberOfColumn = Accountant = 0;
	while (NumberOfLine < 10)
	{
		if (Accountant == COLUMN_ZERO)
			SolveVariable = FirstDigit, Accountant++;
		else if (Accountant == COLUMN_ONE)
			SolveVariable = ',', Accountant++;
		else if (Accountant == COLUMN_TWO)
			SolveVariable = ' ', Accountant++;
		else if (Accountant == COLUMN_THREE)
		{
			SolveVariable = (NumberOfLine * NumberOf_1_9) < 10 ? ' '
				: (NumberOfLine * NumberOf_1_9) / 10 + '0';
			Accountant++;
		}
		else if (Accountant == COLUMN_FOUR)
		{
			SolveVariable = (NumberOfLine * NumberOf_1_9) < 10 ?
				NumberOfLine * NumberOf_1_9 + '0' :
				((NumberOfLine * NumberOf_1_9) % 10) + '0';
			Accountant = 1, NumberOf_1_9++;
		}
		NumberOfColumn++;
		if (NumberOfColumn == 38)
		{
			NumberOfLine++, NumberOfColumn = Accountant = 0;
			SolveVariable = '\n', NumberOf_1_9 = 1;
		}
		_putchar(SolveVariable);
	}
}
