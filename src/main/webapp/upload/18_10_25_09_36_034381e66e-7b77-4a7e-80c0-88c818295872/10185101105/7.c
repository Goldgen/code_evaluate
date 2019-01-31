#include <stdio.h>

int main()
{
    int i,a,b,c,d,n;
    scanf("%d",&n);
    if((n>=7)&&(n<100)&&(n%2==1))
        for(i=1;i<=(n-1)/2;i++)
            printf(" ");
        printf("*\n");
        for(a=1;a<=(n-1)/2-1;a++)
        {
            b=1;
            for(b=1;b<=(n-1)/2-a;b++)
                printf(" ");
            printf("*");
            c=1;
            for(c=1;c<=2*a-1;c++)
                printf(" ");
            printf("*\n");
        }
        for(d=1;d<=n;d++)
            printf("*");
    return 0;
}