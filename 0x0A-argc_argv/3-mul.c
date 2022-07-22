#include <stdio.h>
#include <stdlib.h>
/**
 * main - print arg name
 *
 * @argc: program count
 * @argv: program arg
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
