#include <stdio.h>

/**
 * main - entry point
 * function name - size_datatype
 *
 * Description: Size of 32/64 bit data
 * section header: main
 * Return: 0
 */
int main(void)
{
	printf("Size of a char:%d\n", sizeof(char));
	printf("Size of an int:%d\n", sizeof(int));
	printf("Size of a long int:%d\n", sizeof(long int));
	printf("Size of a long long int:%d\n", sizeof(long long int));
	printf("Size of a float:%d\n", sizeof(float));
	return (0);
}
