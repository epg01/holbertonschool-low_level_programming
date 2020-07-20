#include "holberton.h"

int Print_Number_Octal(long int Number, int Legth_Of_Characer_impresos)
{
        if ((Number / 8) == 1)
	{
		putchar(Number / 8 + '0');
		putchar(Number % 8 + '0');
		return (Legth_Of_Characer_impresos + 2);
	}
	if ((Number / 8) == 0)
	{
		putchar(Number % 8 + '0');
                return (Legth_Of_Characer_impresos + 1);
	}
	else
		Legth_Of_Characer_impresos = Print_Number_Octal(Number / 8, ++Legth_Of_Characer_impresos);
	putchar(Number % 8 + '0');
	return (Legth_Of_Characer_impresos);
}
