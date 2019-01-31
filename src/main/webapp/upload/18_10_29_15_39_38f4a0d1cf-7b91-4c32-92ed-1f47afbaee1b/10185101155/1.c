#include <stdio.h>
int main()
{
    int a,b,c;
    for(a=1;7*a<100;a++)
    {
        for(b=1;5*b+7*a<100;b++)
        {
            c = 100-a-b;
            if(7*a+5*b+c/3.0==100&&c>0)
            printf("%d %d %d",a,b,c);
        }
    }
    return 0;
}
