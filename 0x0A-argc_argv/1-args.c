#include <stdio.h>
/**
 * main - print prog name
 *
 * @argc: program count
 * @argv: program arg
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
