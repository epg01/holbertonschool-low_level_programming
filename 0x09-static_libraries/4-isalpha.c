#include "holberton.h"

/*
 * Two macro are defined, Check if the character to evaluate is a lowercase
 *                     or capital letter.
 */

#define IS_LETTER_UPPER(x) (((x) >= ('a')) && ((x) <= ('z')))
#define IS_LETTER_LOWER(y) (((y) >= ('A')) && ((y) <= ('Z')))

/*
 * Two symbolic constants are defined
 */

#define  LETTER              1
#define  ANYTHING            0

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: variable of type int.
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 *         Returns 0 otherwise.
 */

int _isalpha(int c)
{
	c = (IS_LETTER_UPPER(c) || IS_LETTER_LOWER(c)) ? LETTER : ANYTHING;
	return (c);
}
