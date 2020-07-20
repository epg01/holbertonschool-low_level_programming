#include "holberton.h"

int Print_Unknown(const char *String)
{
	write(1,"%",1);
	write(1, &(*String), 1);

	return (2);
}

int Print_Address(va_list Lista)
{
	int Bits;

	write(1, "0", 1);
	write(1, "x", 1);
	Bits = Print_Number_Hexadecimal_LowerCase((long int)va_arg(Lista, char **), 0);
	return (Bits);
}
