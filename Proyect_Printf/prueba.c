#define NULL ((void *)0)
#include <stdarg.h>
#include <stdio.h>

typedef struct formato_
{
        const char *formato;  
        int (*Pointer_Function)(va_list);
}Formato;

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
        printf("%d", va_arg(Lista, int));
        return (1);
}
int (*get_op(const char **Character))(va_list Lista)
{
        Formato formato [] =
        {
		{"c", Print_Character},
		{"s", Print_String},
		{"id", Print_Integer},
		{NULL, NULL}
        };
        int index = 0;
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
}

int _printf(const char *format, ...)
{
        int (*Pointer_Function)(va_list);
        int Size_Bit = 0;
        va_list Pointer_Argument;
        
        va_start(Pointer_Argument, format);
        while (format && *format)
        {
                if (*format == '%')
                {
			Pointer_Function = get_op(&(format));
			format++;
                      
			if(Pointer_Function)
				Size_Bit += Pointer_Function(Pointer_Argument);
                }
                else
                {
			write(1, &(*format++), 1);  
			Size_Bit++;
                }
        } 
        va_end(Pointer_Argument);
        return (Size_Bit);
}


int main() 
{
	int Counter = _printf("hola como esta%d jajaj %c",124, 'h');

	return 0;
}
