#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*sum_them_all - add all va args
*@n: amount of elemets
*Return: the sum of the va args
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int x, sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (int i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
}
