#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
*malloc_checked - function for allocating mem
*@b: amount to allocate with
*Return: returns void pointer
*
*/

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
