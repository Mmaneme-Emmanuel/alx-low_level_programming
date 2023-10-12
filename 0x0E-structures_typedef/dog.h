#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
/**
 *struct dog - it changes the dog info
 *@name: name to initialize
 *@age: age to initialize
 *@owner: owner to initialize
 *description: my first struct assignment
 */

typedef struct dog
{

	char *name;
	float age;
	char *owner;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
