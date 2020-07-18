#include "variadic_functions.h"

/**
 * char_print - function that prints a char
 * @list: list of functions
 */
void char_print(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * int_print - function that prints an int
 * @list: list of functions
 */
void int_print(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * float_print - function that prints a float
 * @list: list of functions
 */
void float_print(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * str_print - function that prints a string
 * @list: list of functions
 */
void str_print(va_list list)
{
	char *t;

	t = va_arg(list, char *);
	if (t == NULL)
	{
		t = "(nil)";
	}
	printf("%s", t);
}

/**
 * print_all - function that prints anything
 * @format: constant string
 *
 */
void print_all(const char * const format, ...)
{
	forma_t new[] = {
		{'c', char_print},
		{'i', int_print},
		{'f', float_print},
		{'s', str_print},
	};

	int i = 0, j;
	char *pc = "";
	va_list list;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (new[j].op == format[i])
			{
				printf("%s", pc);
				new[j].f(list);
				pc = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
