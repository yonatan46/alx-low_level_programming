#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: Count number
 * @argv: Arguments all
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
