#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters indefined
 * @First_Argument: value
 *
 * Return: integer
 */

int sum_them_all(const unsigned int First_Argument, ...)
{
	if (First_Argument)
	{
		int Result = 0;
		unsigned int Counter;
		va_list Pointer_Argument;

		va_start(Pointer_Argument, First_Argument);

		for (Counter = 0; Counter < First_Argument; Counter++)
			Result += va_arg(Pointer_Argument, int);
		va_end(Pointer_Argument);
		return (Result);
	}
	else
		return (0);
}
