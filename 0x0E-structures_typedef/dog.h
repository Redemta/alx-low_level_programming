#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's information.
 * @name: its name.
 * @age: its age.
 * @owner: who owns it.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
