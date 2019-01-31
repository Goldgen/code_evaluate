#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a;
    int b;
    int d;
    int e;
    int f;
    scanf("%d",&n);
    b=(n-1)/2;    //3
    int c=b-1; //2
    for(a=1;a<=b;++a)//
    {
        printf(" ");
    }
        printf("*\n");//*


    for(c=(b-1);c>0;--c)  //c=2
    {
        e=c;
        for(;e>0;--e)
        {
            printf(" ");
        }
        printf("*");
        d=n-c*2-2;
        for(;d>0;--d)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(f=1;f<=n;++f)
    printf("*");
    return 0;
}