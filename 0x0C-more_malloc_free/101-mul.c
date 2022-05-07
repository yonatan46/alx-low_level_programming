#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
int check_error(char **argv, int argc);
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error\n");
exit(98);
}
chkk = check_error(argv, argc);
if (chkk == 0)
{
l1 = strlen(argv[1]);
l2 = strlen(argv[2]);
for (i = l1 - 1, j = 0; i >= 0; i--, j++)
{
num1[j] = argv[1][i] - '0';
}
for (i = l2 - 1, j = 0; i >= 0; i--, j++)
{
num2[j] = argv[2][i] - '0';
}
for (i = 0; i < l2; i++)
{
for (j = 0; j < l1; j++)
{
mul[i + j] += num2[i] * num1[j];
}
}
for (i = 0; i < l1 + l2; i++)
{
tmp = mul[i] / 10;
mul[i] = mul[i] % 10;
mul[i + 1] = mul[i + 1] + tmp;
}
for (i = l1 + l2; i >= 0; i--)
{
if (mul[i] > 0)
break;
}
for (; i >= 0; i--)
{
printf("%d", mul[i]);
}
}


printf("\n");
return (0);
}


/**
 * check_error - check error
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int check_error(char **argv, int argc)
{
int i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{  printf("Error\n");
exit(98); }
}
}
return (0);
}
