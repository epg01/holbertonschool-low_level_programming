#ifndef HOLBERTON
#define HOLBERTON

#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @operador: The operator
 * @function: The function associated
 */
typedef struct op
{
	char *operador;
	int (*function)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
