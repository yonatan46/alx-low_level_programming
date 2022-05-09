#include <stdio.h>
#include <stdlib.>
#include "dog.h"
/**
* free_dog - free memory
* @d: dog struct
*/

void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
