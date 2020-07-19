#include "holberton.h"

int Print_String(va_list Lista)
{
	char *String = va_arg(Lista, char *);
	int Counter_Bits;

	for(Counter_Bits = 0; *String; Counter_Bits++)
		write(1, &(*String++), 1);
	return (Counter_Bits);
}
int Print_Character(va_list Lista)
{
	int Solve_Character = (char)va_arg(Lista, int);

	write(1, &Solve_Character, 1);
	return (1);
}
