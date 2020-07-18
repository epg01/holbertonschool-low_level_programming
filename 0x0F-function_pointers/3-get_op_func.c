#include "3-calc.h"

/**
 * get_op_func - pointer to a function
 * @Character: pointer to a char
 *
 * Return: pointer function
 */

int (*get_op_func(char *Character))(int Number1, int Number2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].operador != NULL && Character[1] == '\0')
	{
		if (*(ops[i].operador) == *Character)
			return (ops[i].function);
		i++;
	}
	return (NULL);
}
