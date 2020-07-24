#include <stdio.h>

/**
 * mystartupfun - prototype construct is the one
 * that makes the execution of the function first
 * Return: void
 */
void myStartupFun(void) __attribute__ ((constructor));
/**
 * myStartupFun - implementation of myStartupFun
 * Return: void
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
