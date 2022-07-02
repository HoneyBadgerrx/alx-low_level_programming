#include <unistd.h>
#include <stdio.h>
/**
 * main - entry point
 * function_name - no_print
 *
 * Description: Prints without printf/puts
 * section header: main
 * Return: 1
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(s, 1, sizeof(s), stderr);
	return (1);
}
