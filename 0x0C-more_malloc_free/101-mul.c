#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char **argv)
{
int a[1000], b[1000],ans[2000]= {0};
int l1, l2, i, j, tmp;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
l1 = strlen(argv[1]);
l2 = strlen(argv[2]);
for (i = l1 - 1, j = 0; i >= 0; i--, j++)
{
a[j] = argv[1][i] - '0';
}
for (i = l2 - 1, j = 0; i >= 0; i--, j++)
{
b[j] = argv[2][i] - '0';
}
for (i = 0; i < l2; i++)
{
for (j = 0; j < l1; j++)
{
ans[i + j] += b[i] * a[j];
}
}
for (i = 0; i < l1 + l2; i++)
{
tmp = ans[i] / 10;
ans[i] = ans[i] % 10;
ans[i + 1] = ans[i + 1] + tmp;
}
for (i = l1 + l2; i >= 0; i--)
{
if (ans[i] > 0)
break;
}
for (; i >= 0; i--)
{
printf("%d", ans[i]);
}
printf("\n");
return (0);
}
