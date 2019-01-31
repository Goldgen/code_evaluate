#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d+%d=%d",&a,&b,&c);
    if(a+b==c) printf("0");
    else
    {
        if((c-b)%a==0)
        {
            d=(c-b)/a;
            for(e=0;e<10;e++)
            {
                if(pow(10,e)==d) 
                {
                    printf("%d",e);
                    break;
                }
            }
        }
        else if((c-b)%a!=0)
        {
            d=(c-a)/b;
            for(e=0;e<10;e++)
            {
                if(pow(10,e)==d) 
                {
                    printf("-%d",e);
                    break;
                }
            }
        }
    }
    return 0;
}
