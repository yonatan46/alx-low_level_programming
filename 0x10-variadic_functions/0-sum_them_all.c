#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
*sum_them_all - add all va args
*@n: amount of elemets
*Return: the sum of the va args
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (int i = 0; i < n; i++)
	{
		int x = va_arg(args, unsigned int);
		
		sum += x;
	}
	va_end(args);
	return (sum);
}
