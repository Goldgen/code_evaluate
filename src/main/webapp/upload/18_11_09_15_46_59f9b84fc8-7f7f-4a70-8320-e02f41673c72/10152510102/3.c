#include<stdio.h>
#include<string.h>
#include<memory.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=i*2-1;j++)
            printf("%c",'A'+i-1);
        printf("\n");
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(j=1;j<=2*(n-i)-1;j++)
            printf("%c",'A'+n+i-1);
        printf("\n");
    }
    for(j=1;j<n;j++)
        printf(" ");
    printf("%c",'A'+n+n-2);
    return 0;

}
