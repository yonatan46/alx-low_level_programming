#include "main.h"

/**
 * main -Entery point
 * Description - Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Return - Always 0 (Success)
*/

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <='z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');

	return(0);
}
