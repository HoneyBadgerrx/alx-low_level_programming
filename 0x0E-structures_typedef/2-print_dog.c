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
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", ((*d).owner ? (*d).owner : "(nil)\n"));
}
