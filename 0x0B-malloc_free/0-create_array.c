#include "main.h"
/**
 * create_array - creats an array of size size with c value
 *
 * @size: size of desired array
 * @c: char to be filled into array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	while (i < size)
	{
		p[i] = c;
		++i;
	}
	return (p);
}
