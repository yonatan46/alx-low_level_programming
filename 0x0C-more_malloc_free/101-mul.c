#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int i, j, k, l, A, B, C;
char c[1000] = {0};
	if (argc != 3)
	{ 
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}

	}
	//length of the first num argv[1]
	for (i = 0; argv[1][i] != '\0';++i) {    }
	A = i;
	
	//revers 1 order
	for (i = 0; i <= (A - 1) / 2;++i) {
        k = argv[1][i];
        argv[1][i] = argv[1][A - i - 1];
        argv[1][A - i - 1] = k;
    }

	//length of the second num argv[2]
	for (i = 0; argv[2][i] != '\0';++i) { }
    B = i;
	//revers 2 order
	for (i = 0; i <= (B - 1) / 2;++i) {
        k = argv[2][i];
        argv[2][i] = argv[2][B - i - 1];
        argv[2][B - i - 1] = k;
    }
	 //Multiplication of two numbers
    for (i = 0; i <= A - 1;++i) {
        for (j = 0; j <= B - 1;++j) {
            C=(argv[1][i]-48) * (argv[2][j]-48);
            k = i + j;
            c[k] = c[k] + C;
            C = c[k];
            for (l = 0; c[k + l] >= 10;++l) {
               c[k+l] = c[k + l] % 10;
                c[k + l + 1] = C / 10 + c[k + l+1];
                C = c[k+l+1];
            }
        }
    }

     //Output multiplied number
    for (i = 19; c[i] == 0;i--) {
        if (c[i]==0) {
            c[i] = '\0';
        }
    }
    j = i + 1;
    for (i = 0; i < (j - 1)/2;++i) {
        k = c[i];
        c[i] = c[j-i - 1];
        c[j - i - 1] = k;
    }
    for (i = 0; i < j;++i) {
        printf("%d",c[i]);
    }
	printf("\n");

	// mul = atoi(argv[1]) *  atoi(argv[2]);
	// printf("%lu\n", mul);

return (0);
}
