#include "function_pointers.h"
/**
* print_name - prints name
* @name: name input
* @f: function name
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
