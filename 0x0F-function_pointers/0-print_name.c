#include "function_pointers.h"

/**
 * print_name - prints a name using pointer to function.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
