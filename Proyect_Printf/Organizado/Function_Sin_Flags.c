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

int Print_Integer(va_list Lista)
{
	print_number(va_arg(Lista, int));
        return (1);
}

int Print_Porcentaje(va_list Lista)
{
	(void)Lista;

	write(1, "%", 1);
	return (1);
}
