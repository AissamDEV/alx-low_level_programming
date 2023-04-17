#ifndef MAIN_H
#define MAIN_H
/**
  *struct dog - a dog basic info
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *
  *Return: void
  *
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MAIN_H */
