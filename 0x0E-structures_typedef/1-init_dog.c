#include "dog.h"
#include <stddef.h>
/**
  *init_dog - initializes a dog structure
  *@d: pointer to the dog struct to initialize
  *@name: name of the dog
  *@age: age of the dog
  *@owner: name of the dog's owner
  *
  *Return: void
  *
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
