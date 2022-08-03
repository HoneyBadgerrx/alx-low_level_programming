#include "main.h"
/**
 * printer - prints name
 * @name: name string to be printed
 * Return: void
 */
void printer(char *name)
{
	printf("Hello, my name is %s\n", name);
}
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
