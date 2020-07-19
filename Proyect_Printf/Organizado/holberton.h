#ifndef Holberton
#define Holberton


#define NULL ((void *)0)
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

typedef struct formato_
{
        const char *formato;
        int (*Pointer_Function)(va_list);
}Formato;

int Print_String(va_list Lista);
int Print_Character(va_list Lista);
int (*get_op(const char **Character))(va_list Lista);
const char **Isdigit(const char **String);



int _printf(const char *format, ...);

#endif
