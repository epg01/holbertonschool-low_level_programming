#include "holberton.h"

int (*get_op(const char **Character))(va_list Lista)
{
	Formato formato [] = {
		{"c",  Print_Character},
		{"s",  Print_String},
		{"id", Print_Integer},
		{"%",  Print_Porcentaje},
		{"xX", Print_Hexagecimal},
		{"u",  Print_Unsigned_Integer},
		{"o",  Print_Octal},
		{"b",  Print_Number_Binario},
		{NULL, NULL}
	};

	int index = 0;

	if (**Character == '%' && (*Character)[-1] != '%')
		(*Character)++;

	while ((formato[index].formato))
	{
		if (*(formato[index].formato) == *(*Character))
			return (formato[index].Pointer_Function);
		else if (*(formato[index].formato))
			(formato[index].formato)++;
		else
			index++;
	}
	return (0);
}
