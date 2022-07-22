#include <stdio.h>
/**
 * main - print arg name
 *
 * @argc: program count
 * @argv: program arg
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;
	(void)argv;
	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
