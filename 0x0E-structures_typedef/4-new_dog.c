#include "dog.h"
/**
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n = malloc(sizeof(dog_t));
	if(n = NULL)
		return (NULL);
	(*n).name = name;
	(*n).age = age;
	(*n).owner = owner;
	return (n);
}
