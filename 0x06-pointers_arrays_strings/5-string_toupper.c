#include "main.h"

/**
 * string_toupper - changes lowercase to upper
 *
 * @src: string
 * Return: nil
 */
char *string_toupper(char *src)
{
	int i;

	for (i = 0; i != '\0'; ++i)
	{
		if (src[i] >= 'a' && src[i] <= 'z')
			src[i] -= 32;
	}
	return (src);
}
