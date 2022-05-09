#include "dog.h"
#include <stdio.h>
/**
*print_dog - print dog
*@d:do struck
*Return: void
*/
void print_dog(struct dog *d)
{
if (d)
{
if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
