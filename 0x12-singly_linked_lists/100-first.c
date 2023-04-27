#include "lists.h"
/**
 * mystartupfunction - prints a string before the main function is complete
 *
 * Return: void
 */
void __attribute__ ((constructor)) mystartupfunction(void)
{
	/* Apply the constructor attribute to myStartupFun() so that */
	/*  is complete before main() */

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

