#include<stdio.h>
int main(void)
{
    int n,a,b,c,d,e;
    scanf("%d",&n);
    for(a=0;a<((n-1)/2);a++)
        printf(" ");
    printf("*\n");
    for(b=1;b<=(n-4);b+=2)
    {
        for(c=0;c<((n-b-2)/2);c++)
            printf(" ");
        printf("*");
        for(d=0;d<b;d++)
            printf(" ");
        printf("*\n");
    }
    for(e=0;e<n;e++)
        printf("*");
    return 0;
}
