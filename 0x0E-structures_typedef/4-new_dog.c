#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - crreates new sttruct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to structure dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n = malloc(sizeof(dog_t));

	if (n == NULL)
		return (NULL);
	(*n).name = name;
	(*n).age = age;
	(*n).owner = owner;
	return (n);
}
