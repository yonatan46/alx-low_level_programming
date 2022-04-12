#include "main.h"

/**
 * main - entery point
 * description - prints _putchar usingputchar
 * return - always(0)
*/

int main(void)
{
	char *str = "hello";
	while(*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

	return(0);
}
