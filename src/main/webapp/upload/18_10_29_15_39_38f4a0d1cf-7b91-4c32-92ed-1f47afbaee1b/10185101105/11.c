#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    for(a=100;a<=999;a++)
    {
        b=a/100;
        c=(a%100)/10;
        d=a%10;
        if(a==b*b*b+c*c*c+d*d*d)
		{
            printf("%d",a);
            break;
		}
    }
    for(a+=1;a<=999;a++)
    {
        b=a/100;
        c=(a%100)/10;
        d=a%10;
        if(a==b*b*b+c*c*c+d*d*d)
            printf(" %d",a);
    }
    return 0;
}