#include "function_pointers.h"
/**
*int_index - return index
*@array: array
*@cmp: function to run
*@size: size of array
*Return: some int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int x;
if (size <= 0)
return (-1);
if (array && size && cmp)
{
for (x = 0; x < size; x++)
{
if ((*cmp)(array[x]) != 0)
{
return (x);
}
}
}
return (-1);
}
