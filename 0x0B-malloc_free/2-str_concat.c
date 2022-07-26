#include "main.h"
/**
 * str_concat - concatenates 2 given strings
 *
 * @s1: first string
 * @s2: following string
 * Return: pointer to concat string in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, total, sizes1, sizes2;
	char *p;

	if (s1 == NULL)
		sizes1 = 0;
	else
		sizes1 = strlen(s1);
	if (s2 == NULL)
		sizes2 = 0;
	else
		sizes2 = strlen(s2);
	total = sizes1 + sizes2 + 1;
	p = malloc(sizeof(char) * total);
	if (p == NULL)
		return (NULL);
	while (*s1 && s1 != NULL)
	{
		p[i] = *s1;
		++i;
		++s1;
	}
	while (*s2 && s2 != NULL)
	{
		p[i] = *s2;
		++i;
		++s2;
	}
	p[i] = '\0';
	return (p);
}
#include <stdio.h>

#include <stdlib.h>



char *str_concat(char *, char *);



/**
 *
 *  * main - check the code .
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

		char *s;



			s = str_concat("Hello", NULL);

				if (s == NULL)

						{

									printf("failed\n");

											return (1);

												}

					printf("%s\n", s);

						free(s);



						    s = str_concat(NULL, "Hello");

						    	if (s == NULL)

									{

												printf("failed\n");

														return (1);

															}

								printf("%s\n", s);

									free(s);



									    s = str_concat(NULL, NULL);

									    	if (s == NULL)

												{

															printf("failed\n");

																	return (1);

																		}

											printf("%s\n", s);

												free(s);



													return (0);

}
