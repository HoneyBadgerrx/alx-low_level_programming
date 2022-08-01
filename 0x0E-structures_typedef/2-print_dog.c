#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints types of dog
 * @d: name of structure dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", ((*d).name ? (*d).name : "(nil)\n"));
	if ((*d).age > 0)
		printf("Age: %f\n", (*d).age);
	else
		printf("Age: (nil)\n");
	printf("Owner: %s", ((*d).owner ? (*d).owner : "(nil)"));
}
