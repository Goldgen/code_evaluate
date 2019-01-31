#include <stdio.h>
int main()
{
    int a,b,c,t;
    for(t=100;t<=999;t++)
    {
        a=t/100;
        b=(t%100)/10;
        c=t%10;
        if(a*a*a+b*b*b+c*c*c==t&&a!=4)
            printf("%d ",t);
		else if(a*a*a+b*b*b+c*c*c==t)
			printf("%d",t);
    }
}