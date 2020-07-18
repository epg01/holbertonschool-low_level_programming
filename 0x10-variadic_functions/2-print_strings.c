#include "variadic_functions.h"
/**
 * print_strings - suma
 * @separator: The first string
 * @n: cantidad
 * @..: the second string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *aux;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		aux = va_arg(list, char*);
		if (aux == NULL)
			printf("(nil)");
		else
			printf("%s", aux);
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
