#include <stdio.h>
#include <string.h>
#include "main.h"
int main(int argc,char **argv)
{
    int a[1000],b[1000];
    int ans[2000]={0};
    int i,j,tmp;
    // char s1[101],s2[101];
    // scanf(" %s",s1);
    // scanf(" %s",s2);
    int l1 = strlen(argv[1]);
    int l2 = strlen(argv[2]);
    for(i = l1-1,j=0;i>=0;i--,j++)
    {
        a[j] = argv[1][i]-'0';
    }
    for(i = l2-1,j=0;i>=0;i--,j++)
    {
        b[j] = argv[2][i]-'0';
    }
    for(i = 0;i < l2;i++)
    {
        for(j = 0;j < l1;j++)
        {
            ans[i+j] += b[i]*a[j];
        }
    }
    for(i = 0;i < l1+l2;i++)
    {
        tmp = ans[i]/10;
        ans[i] = ans[i]%10;
        ans[i+1] = ans[i+1] + tmp;
    }
    for(i = l1+l2; i>= 0;i--)
    {
        if(ans[i] > 0)
            break;
    }
    for(;i >= 0;i--)
    {
        printf("%d",ans[i]);
    }
	printf("\n");
    return 0;
}