#include "3-calc.h"
#include <string.h>
#include <stdio.h>

/**
 * main - main function program.
 * @argc: number of args
 * @argv: pointer to array of args(strings)
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int Number2, (*Pointer_Obtener_Operador)(int Number1, int Number2);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	Pointer_Obtener_Operador = get_op_func(&*argv[2]);
	if (!Pointer_Obtener_Operador)
	{
		printf("Error\n");
		exit(99);
	}

	Number2 = atoi(*(argv + 3));

	if (!Number2 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", Pointer_Obtener_Operador(atoi(*(argv + 1)), Number2));
	return (0);
}
