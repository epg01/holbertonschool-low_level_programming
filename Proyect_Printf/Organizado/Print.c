#include "holberton.h"

int main()
{
      return (_printf("hola como esta%s jajaj %c\n","bebe", 'h'));
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
			Pointer_Function = get_op((const char **)Isdigit((const char **)&(format)));
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
