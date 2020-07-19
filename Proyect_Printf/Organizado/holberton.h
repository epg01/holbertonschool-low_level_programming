#ifndef Holberton
#define Holberton


#define NULL ((void *)0)
#define POWER_OF_10    10
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

typedef struct formato_
{
        const char *formato;
        int (*Pointer_Function)(va_list);
}Formato;

int Print_String(va_list Lista);
int Print_Character(va_list Lista);
int Print_Integer(va_list Lista);
int Print_Porcentaje(va_list Lista);
int Print_Hexagecimal(va_list Lista);
int Print_Unsigned_Integer(va_list Lista);
int Print_Octal(va_list Lista);

int (*get_op(const char **Character))(va_list Lista);


const char **Isdigit(const char **String);
void print_number(int Number);
void print_number_unsigned(long int Number);

int _printf(const char *format, ...);

#endif
