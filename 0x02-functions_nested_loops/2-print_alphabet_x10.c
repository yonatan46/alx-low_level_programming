#include "main.h"

/**
 * Definition - Write a function that prints 10 times the alphabet, 
 *              in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
    char alp;
    int i;
    for ( i = 0; i <= 10; i++)
    {
        alp = 'a';
        while (alp <= 'z')
        {
            _putchar(alp);
            alp++;
        }
        _putchar('\n');
    }
}