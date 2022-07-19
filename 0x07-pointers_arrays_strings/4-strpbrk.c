#include "main.h"
/**
 * _strpbrk - min bytes where acceot can be found in s
 *
 * @s: character to search in
 * @accept: string to be searched for
 * Return: pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int v;
	char *p = NULL;
	int counter = strlen(s);

	for (i = 0; accept[i] != '\0'; ++i)
	{
		for (v = 0; s[v] != '\0'; ++v)
		{
			if (accept[i] == s[v])
			{
				if (counter > v)
				{
					p = &s[v];
					counter = v;
				}
				break;
			}
		}
	}
	return (p);
}
int main(void)

{

		char *s = "First, solve the problem. Then, write the code.";

			char *f = "School";

				char *t;



					t = _strpbrk(s, f);

						printf("%s\n", (t == NULL ? "nil" : t));

							return (0);

}
