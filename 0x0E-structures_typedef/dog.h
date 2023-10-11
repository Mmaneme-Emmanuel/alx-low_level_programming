#ifndef _MAIN_H_
#define _MAIN_H_
/**
 *struct dog - it changes the dog info
 *@name: name to initialize
 *@age: age to initialize
 *@owner: owner to initialize
 *description: my first struct assignment
 */

/**
 *@dog_t: the new name for struct dog
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
