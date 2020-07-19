#ifndef FuncionPrototype
#define FuncionPrototype

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @Character: The Calificador
 * @Pointer_Function: The function associated
 */

struct formato_
{
        char *formato;
        void (*Pointer_Funcion)(va_list list, unsigned short int Separador);
};

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
