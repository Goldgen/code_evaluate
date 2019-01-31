#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    char s='A';
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=(n-i);j>=1;j--)
            printf(" ");
        for(j=1;j<=(2*i-1);j++)
            printf("%c",s);
        printf("\n");
        s++;
    }
    for(i-=2;i>=1;i--)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(j=1;j<=(2*i-1);j++)
            printf("%c",s);
        s++;
        if(i!=1)
            printf("\n");
    }
}