#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - the dog to initialize
 *@d: pointer to struct dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: he is the riht owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)

d->name = name;
d->owner = owner;
d->age = age;
}
