#include<stdio.h>
int main(void)
{
    int n,a,b,c;
    scanf("%d",&n);
    printf("*\n");
    for(a=0;a<n-2;a++)
    {
        printf("*");
        for(b=0;b<a;b++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(c=0;c<n;c++)
    {
        printf("*");
    }
    return 0;
}
