#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a,b,c;
    scanf("%ld+%ld=%ld",&a,&b,&c);
    long x,y,z;
    x=c-b;
    y=c-a;
    if(x%a==0)
        z=x/a;
    else if(y%b==0)
        z=y/b;
        int i;
    for(i=0;z>9;i++)
    {
        z/=10;
    }
    if(x%a==0)
        printf("%d",i);
    else if(y%b==0)
        printf("-%d",i);
    return 0;
}
