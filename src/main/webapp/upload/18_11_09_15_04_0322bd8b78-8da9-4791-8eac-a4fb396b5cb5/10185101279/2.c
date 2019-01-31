#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<float.h>

int main()
{
    int i,j,m;
    int n;

    scanf("%d",&n);
    for(i=1;i<=2*n-2;i++)
        printf(" ");
    printf("1=1");
    for(i=2;i<=n;i++)
    {   printf("\n");
        for(j=1;j<=2*n-2*i;j++)
            printf(" ");
        printf("1");
        for(m=2;m<=i;m++)
            printf("+%d",m);
            printf("=");
        for(m=i;m>=2;m--)
            printf("%d+",m);
        printf("1");
    }



    return 0;
}



