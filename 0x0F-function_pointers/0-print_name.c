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
/**
 * print_name - calls printer function
 * @name: string to be printed
 * @f: function to print
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
