#include <stdio.h>

/**
*op_add - add a,b
*@a: first value
*@b: second value
*Return: sum of a,b
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
*op_sub - sub a,b
*@a: first value
*@b: second value
*Return: sub of a,b
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
*op_mul - mul a,b
*@a: first value
*@b: second value
*Return: mul of a,b
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
*op_div - div a,b
*@a: first value
*@b: second value
*Return: div of a,b
*/

int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
printf("Error\n");
exit(100);
}

/**
*op_mod - mod a,b
*@a: first value
*@b: second value
*Return: mod of a,b
*/
int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit(100);
}
