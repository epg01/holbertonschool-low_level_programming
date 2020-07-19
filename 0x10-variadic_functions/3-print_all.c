#include "variadic_functions.h"

/**
 * Print_Character - Function that prints a character
 * @lista: Contains the arguments that were passed to the function.
 * @Separador: Funciona como un contador para imprimir espacio entre
 *             el contenido de los argumentos.
 */

void Print_Character(va_list lista, unsigned short int Separador)
{
	printf((Separador < 2) ? "%c " : "%c\n", va_arg(lista, int));
}

/**
 * Print_Integer - Function that prints a number integer
 * @lista: Contains the arguments that were passed to the function.
 * @Separador: Funciona como un contador para imprimir espacio entre
 *             el contenido de los argumentos.
 */

void Print_Integer(va_list lista, unsigned short int Separador)
{
	printf((Separador < 2) ? "%d " : "%d\n", va_arg(lista, int));
}

/**
 * Print_Float - Function that prints a number point-flot
 * @lista: Contains the arguments that were passed to the function.
 * @Separador: Funciona como un contador para imprimir espacio entre
 *             el contenido de los argumentos.
 */

void Print_Float(va_list lista, unsigned short int Separador)
{
	printf((Separador < 2) ? "%f " : "%f\n", va_arg(lista, double));
}

/**
 * Print_String - Function that prints a character string
 * @lista: Contains the arguments that were passed to the function.
 * @Separador: Funciona como un contador para imprimir espacio entre
 *             el contenido de los argumentos.
 */

void Print_String(va_list lista, unsigned short int Separador)
{
	printf((Separador < 2) ? "%s" : "%s\n", va_arg(lista, char *));
}

/**
 * print_all - function that prints anything.
 * @format: Pointer that Contains the arguments that were passed to the funct.
 */

void print_all(const char * const format, ...)
{
	format_ formato[] = {
		{"c", Print_Character},
		{"i", Print_Integer},
		{"f", Print_Float},
		{"s", Print_String}
	};
	unsigned short int index = 0;
	unsigned short int Separador = 0;
	unsigned short int index_Formato = 0;
	char State = 0;

	va_list Lista_Argument;

	va_start(Lista_Argument, format);
	while (format && format[index])
	{
		if (*(formato[index_Formato].formato) == format[index])
		{
			formato[index_Formato].Pointer_Funcion(Lista_Argument, Separador++);
			State = 1;
		}
		index_Formato++;
		if (State || index_Formato == 4)
			index_Formato = 0, State = 0, index++;
	}
	va_end(Lista_Argument);
}
