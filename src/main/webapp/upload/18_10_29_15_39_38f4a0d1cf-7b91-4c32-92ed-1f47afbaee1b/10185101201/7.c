#include <stdio.h>

int main()
{
    int a,b,n=0;
    scanf("%d",&a);
    while(a!=0)
        {
            b=a%2;
            a=a/2;
            if (b==1)
                n++;
        }
        printf("%d",n);
}