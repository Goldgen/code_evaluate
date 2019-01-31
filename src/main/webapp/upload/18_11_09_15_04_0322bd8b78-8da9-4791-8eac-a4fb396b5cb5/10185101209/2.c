#include<stdio.h>

int main()
{
    int n;
    int a,e,i;

    scanf("%d",&n);
    for(a = 0; a < n; a++){
        for(e = 2*n - 2*a - 2; e > 0; e--)
            printf(" ");
        printf("1");
        for(i = 2; i <= a+1; i++)
            printf("+%d",i);
        printf("=");
        for(i = a+1; i > 1; i--)
            printf("%d+",i);
        printf("1");
        if(a!=n-1)
            printf("\n");
    }
    return 0;
}