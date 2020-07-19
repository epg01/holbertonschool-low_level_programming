#include "variadic_functions.h"

/**
 * Counter_Ocurrence - Counts the occurrences of the format.
 * @format: pointer a la varialbe format
 * Return: Number of ocurrence.
 */

short int Counter_Ocurrence(const char * const format)
{
	short int Counter = 0;
	unsigned short int index = 0;

	while (format && format[index])
	{
		if (format[index] == 'c' || format[index] == 'i'
			|| format[index] == 's' || format[index] == 'f')
			Counter++;
		index++;
	}
	return (Counter);
}

/**
 * Print_Character - Function that prints a character
 * @lista: Contains the arguments that were passed to the function.
 * @Separador: Funciona como un contador para imprimir espacio entre
 *             el contenido de los argumentos.
 */

void Print_Character(va_list lista, short int Separador, short int Limit)
{
	printf((Separador < Limit - 1) ? "%c " : "%c\n", va_arg(lista, int));
}

/**
 * Print_Integer - Function that prints a number integer
 * @lista: Contains the arguments that were passed to the function.
 * @Separador: Funciona como un contador para imprimir espacio entre
 *             el contenido de los argumentos.
 */

void Print_Integer(va_list lista, short int Separador, short int Limit)
{
	printf((Separador < Limit - 1) ? "%d " : "%d\n", va_arg(lista, int));
}

/**
 * Print_Float - Function that prints a number point-flot
 * @lista: Contains the arguments that were passed to the function.
 * @Separador: Funciona como un contador para imprimir espacio entre
 *             el contenido de los argumentos.
 */

void Print_Float(va_list lista, short int Separador, short int Limit)
{
	printf((Separador < Limit - 1) ? "%f " : "%f\n", va_arg(lista, double));
}

/**
 * Print_String - Function that prints a character string
 * @lista: Contains the arguments that were passed to the function.
 * @Separador: Funciona como un contador para imprimir espacio entre
 *             el contenido de los argumentos.
 */

void Print_String(va_list lista, short int Separador, short int Limit)
{
	printf((Separador < Limit - 1) ? "%s" : "%s\n", va_arg(lista, char *));
}

/**
 * print_all - function that prints anything.
 * @format: Pointer that Contains the arguments that were passed to the funct.
 */

void print_all(const char * const format, ...)
{
	format_ formato[] = {
		{0, 0, "c", Print_Character},
		{0, 0, "i", Print_Integer},
		{0, 0, "f", Print_Float},
		{0, 0, "s", Print_String}
	};
	unsigned short int index = 0;
	unsigned short int index_Formato = 0;
	char State = 0;

	va_list Lista_Argument;

	ini_struc(formato, format, index)

	index = 0;
	va_start(Lista_Argument, format);
	while (format && format[index])
	{
		if (*(formato[index_Formato].formato) == format[index])
		{
			formato[index_Formato].Pointer_Funcion(Lista_Argument, (formato[1].Separador)++, formato[2].Limit);
			State = 1;
		}
		index_Formato++;
		if (State || index_Formato == 4)
			index_Formato = 0, State = 0, index++;
	}
	va_end(Lista_Argument);
}
