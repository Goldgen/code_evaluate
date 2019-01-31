#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    scanf("%d",&a);
    c=0;
    while(c<a)
    {
        printf("*");
        c++;
    }
    printf("\n");
    for(b=0;b<(a-2);b++)
    {
        printf("*");
        for(d=0;d<(a-2);d++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    c=0;
    while(c<a)
    {
        printf("*");
        c++;
    }
    return 0;
}
