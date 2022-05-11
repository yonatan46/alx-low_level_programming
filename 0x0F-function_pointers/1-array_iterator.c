#include "function_pointers.h"
/**
*array_iterator - iterate through the array
*@array: array
*@size: size of the array
*@action: a void function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int x = 0;
while (x < size)
{
action(array[x]);
}
}
