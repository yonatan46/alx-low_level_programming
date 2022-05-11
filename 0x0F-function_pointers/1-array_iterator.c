#include "function_pointers.h"
/**
*array_iterator - iterate through the array
*@array: array
*@size: size of the array
*@action: a void function
*Return : void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int x = 0;
if (array && size && action)
{
while (x < size)
{
action(array[x]);
x++;
}
}
}
