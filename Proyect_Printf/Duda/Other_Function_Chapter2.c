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

int Print_Number_Hexadecimal_LowerCase(long int Number, int Legth_Of_Characer_impresos)
{
	if ((Number / 16) == 1)
	{
		int Number1 = Number / 16;

		if (Number1 < 10)
		{
			Number1 += '0';
			write(1,&Number1,1);
		}
		else
		{
			Number1 += ('A' - 10);
			write(1,&Number1,1);
		}
		Number = Number % 16;
		if (Number < 10)
		{
			Number1 += '0';
			write(1,&Number1,1);
		}
		else
		{
			Number1 += ('a' - 10);
			write(1,&Number1, 1);
		}
		return (Legth_Of_Characer_impresos + 2);
	}
	if ((Number / 16) == 0)
	{
		if (Number < 10)
		{
			Number += '0';
			write(1,&Number,1);
		}
		else
		{
			Number += ('a' - 10);
			write(1,&Number,1);
		}
		return (Legth_Of_Characer_impresos + 1);
	}
	else
		Legth_Of_Characer_impresos = Print_Number_Hexadecimal_LowerCase(Number / 16, ++Legth_Of_Characer_impresos);
	Number = Number % 16;
	if (Number < 10)
	{
		Number += '0';
		write(1,&Number,1);
	}
	else
	{
		Number += ('a' - 10);
		write(1,&Number,1);
	}
	return (Legth_Of_Characer_impresos);

}

int Print_Number_Hexadecimal_UpperCase(long int Number, int Legth_Of_Characer_impresos)
{
	if ((Number / 16) == 1)
	{
		int Number1 = Number / 16;

		if (Number1 < 10)
		{
			Number1 += '0';
			write(1,&Number1,1);
		}
		else
		{
			Number1 += ('A' - 10);
			write(1,&Number1,1);
		}
		Number = Number % 16;
		if (Number < 10)
		{
			Number1 += '0';
			write(1,&Number1,1);
		}
		else
		{
			Number1 += ('A' - 10);
			write(1,&Number1,1);
		}
		return (Legth_Of_Characer_impresos + 2);
	}
	if ((Number / 16) == 0)
	{
		if (Number < 10)
		{
			Number += '0';
			write(1,&Number,1);
		}
		else
		{
			Number += ('A' - 10);
			write(1,&Number,1);
		}
		return (Legth_Of_Characer_impresos + 1);
	}
	else
		Legth_Of_Characer_impresos = Print_Number_Hexadecimal_UpperCase(Number / 16, ++Legth_Of_Characer_impresos);

	Number = Number % 16;

	if (Number < 10)
	{
		Number += '0';
		write(1,&Number,1);
	}
	else
	{
		Number += ('A' - 10);
		write(1,&Number,1);
	}
	return (Legth_Of_Characer_impresos);
}

int PrintSTRING(char *String)
{
	int Counter = 0;

	while(String && *String)
	{
		if ((*String < 32 || *String >= 127))
		{
			write(1, "\\", 1);
			write(1, "x", 1);
			write(1, "0", 1);
			Print_Number_Hexadecimal_UpperCase((int)*String, 0);
			String++;
			Counter += 4;
		}
		write(1, &(*String++), 1);
		Counter++;
	}
	return (Counter);
}
