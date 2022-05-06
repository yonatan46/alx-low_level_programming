#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
*string_nconcat - concatinate 2 string till n size
*@s1: destination to cat
*@s2: source to cat 
*@n:size to cat 
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    concat = malloc(sizeof(s2) * n);
    int x = 0;
    int y = 0;

    while (s1[x])
    {
        concat[x] = s1[x];
        x++;
    }

    while (y < n)
    {
        concat[x] = s2[y];
        x++;
        y++;
    }
    concat[x] = '\0';

    return (concat);
}
