#include <stdio.h>
#include <stdlib.h>
int function(int a)
{
    int i;
    int n=1;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        n=0;
    }
    return n;
}
int main()
{
    int a;
    int b;
    int x;
    scanf("%d",&a);
    printf("%d",a);
    for(b=2;b<=a/2;b++)
        {
            x=a-b;
            if((function(b)!=0)&&(function(x)!=0))
            printf("=%d+%d",b,x);
        }
    return 0;
}