#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a='A';
    int n,i,j,k,l,m,o,p,q;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<n-i+1;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("%c",a+i-1);
            printf("\n");
    }
    for(l=1;l<=2*n-1;l++)
        printf("%c",a+n-1);
    printf("\n");
    for(m=1;m<n-1;m++)
    {
        for(o=1;o<=m;o++)
            printf(" ");
        for(p=1;p<=2*(n-m)-1;p++)
            printf("%c",a+n+m-1);
        printf("\n");
    }
    for(q=1;q<n;q++)
        printf(" ");
    printf("%c",a+2*(n-1));
    return 0;
}
