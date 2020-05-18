/*
 *  Write a program that prints Holberton, followed by a new line.
 */

#include <stdio.h>
#include "holberton.h"

/*
 *   Place where the functions are declared or where the so-called
 *   prototype functions are
 */

void PrintCharacter(unsigned char ArrayOfCharacter[]);
int _putchar(char c);

/**
 * main - function that controls the printing process.
 * Return: satisfactory output
 */

int main(void)
{
	unsigned char ArrayOfCharacter[] = "Holberton\n";

	if (*ArrayOfCharacter)
		PrintCharacter(ArrayOfCharacter);
	return (0);
}

/**
 * PrintCharacter - function that prints the characters of a vector
 * @ArrayOfCharacter: A variable that stores memory addresses (pointer)
 */

void PrintCharacter(unsigned char ArrayOfCharacter[])
{
	while (*ArrayOfCharacter)
		_putchar(*ArrayOfCharacter++);
}
