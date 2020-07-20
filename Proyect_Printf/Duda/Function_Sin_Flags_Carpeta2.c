#include "holberton.h"

int Print_Hexagecimal(va_list Lista)
{
	(void)Lista;
	return (1);
}
int Print_Octal(va_list Lista)
{
	int Bits;

	Bits = Print_Number_Octal(va_arg(Lista,unsigned int), 0);

        return (Bits);
}

int Print_Number_Binario(va_list Lista)
{
	int Bits;

	Bits = Print_Binario(va_arg(Lista,unsigned int), 0);

	return (Bits);
}
