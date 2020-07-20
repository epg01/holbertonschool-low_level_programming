#include "holberton.h"

int Print_Number_Octal(long int Number, int Legth_Of_Characer_impresos)
{
        if ((Number / 8) == 1)
	{
		int Number1 = Number / 8 + '0';

		write(1,&Number1,1);

		Number = Number % 8 + '0';
		write(1, &Number, 1);
		return (Legth_Of_Characer_impresos + 2);
	}
	if ((Number / 8) == 0)
	{
		Number = Number % 8 + '0';
		write(1, &Number, 1);
                return (Legth_Of_Characer_impresos + 1);
	}
	else
		Legth_Of_Characer_impresos = Print_Number_Octal(Number / 8, ++Legth_Of_Characer_impresos);
	Number = Number % 8 + '0';

	write(1, &Number,1);
	return (Legth_Of_Characer_impresos);
}
