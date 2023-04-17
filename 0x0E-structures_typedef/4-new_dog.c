#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
  * new_dog - create a new dog struct
  *
  *@name: a string representing the name of the dog
  *@age: a float representing the age of the dog
  *@owner: a string representing the name of the dog's owner
  *
  *Return: a pointer to a new dog struct or NULL if memory allocation fails
  *
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);

	if (new_dog->name == NULL)
		free(new_dog);
		return (NULL);

	new_dog->age = age;
	new_dog->owner = strdup(owner);

	if (new_dog->owner == NULL)
		free(new_dog->name);
		free(new_dog);
		return (NULL);

	return (new_dog);
}
