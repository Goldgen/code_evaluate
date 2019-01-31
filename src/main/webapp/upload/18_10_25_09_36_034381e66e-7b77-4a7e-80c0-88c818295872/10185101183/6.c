#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("*\n");
    for(int i=0;i<n-2;++i)
    {
        printf("*");
        for(int j=0;j<i;++j)
            printf(" ");
        printf("*\n");
    }
    for(int k=0;k<n;++k)
        printf("*");
    return 0;

}
