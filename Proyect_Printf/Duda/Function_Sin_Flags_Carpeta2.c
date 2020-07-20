#include "holberton.h"

int Print_Hexagecimal_UpperCase(va_list Lista)
{
	return (Print_Number_Hexadecimal_UpperCase(va_arg(Lista, unsigned int), 0));
}
int Print_Hexagecimal_LowerCase(va_list Lista)
{
	return (Print_Number_Hexadecimal_LowerCase(va_arg(Lista, unsigned int), 0));
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
