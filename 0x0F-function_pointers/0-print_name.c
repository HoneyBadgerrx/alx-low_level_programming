#include "function_pointers.h"
/**
 * print_name - calls printer function
 * @name: string to be printed
 * @f: function to print
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
