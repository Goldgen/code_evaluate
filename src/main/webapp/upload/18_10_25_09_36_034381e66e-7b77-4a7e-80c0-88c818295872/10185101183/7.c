#include<stdio.h>
int main(void)
{
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<n;i=i+2)
    {
        for(int j=0;j<(n-i)/2;++j)
            printf(" ");
        printf("*");
        for(int k=1;k<=i-2;++k)
            printf(" ");
        if(i>1)
            printf("*\n");
        else
            printf("\n");
    }
    for(int l=0;l<n;++l)
        printf("*");
    return 0;
}