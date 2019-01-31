#include <stdio.h>
#include <stdlib.h>

int sushu(int a)
{
    int m=0;
    if(a==0||a==1)
        m=1;
    else
    {
        for(int i=0;i<(a/2-1);++i)
        {
            if(a%(i+2)==0)
                m=1;
        }
    }
    return m;
}

int main()
{
    int a=0;
    scanf("%d",&a);
    int b=sushu(a);
    if(b)
        printf("It's not a prime number.");
    else
        printf("It is a prime number.");
    return 0;
}
