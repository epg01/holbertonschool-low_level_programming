#ifndef FuncionPrototype
#define FuncionPrototype

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#define ini_struc(formato,format, Counter)  while(Counter < 4)(formato[Counter++].Limit) = Counter_Ocurrence(format);

/**
 * struct op - Struct op
 *
 * @Character: The Calificador
 * @Pointer_Function: The function associated
 */

typedef struct formato_
{
	short int Separador;
	short int Limit;
        char *formato;
        void (*Pointer_Funcion)(va_list list, short int Separador, short int limit);
}format_;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
