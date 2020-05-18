/**
 *  _islower - Function that checks for lowercase character.
 *  @c: variable type int
 *  Return: Returns 1 if c is a lowercase character otherwise returns zero
 */
/*
 * Two symbolic constants are defined
 */

#define  LOWERCASE_LETTER    1
#define  ANYTHING            0
/*
 * A macro is defined
 */

#define islower(Character) (((Character) >= ('a')) && ((Character) <= ('z')))

int _islower(int c)
{
	c = (islower(c)) ? LOWERCASE_LETTER : ANYTHING;
	return (c);
}
