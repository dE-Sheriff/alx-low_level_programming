#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type
 * @name: - name
 * @age: age -nt
 * @owner: name owner
 *
 * Description: Defines a new type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
