#include <stdio.h>
int main()
{
    int x,a,b,c,n;
    scanf("%d",&x);
    for(a=x,b=1,c=1,n=0;c!=0;a=c)
    {
        b=a%2;
        c=a/2;
        if(b==1)
            n++;
    }
    printf("%d",n);
    return 0;
}
