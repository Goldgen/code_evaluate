#include <stdio.h>
int main()
{
    int n;
    int a,b,c;int t;
    t=1;
    for(n=100;n<1000;n++)
    {
           a = n/100;
           b = (n-100*a)/10;
           c = n-100*a-10*b;
        if(a*a*a+b*b*b+c*c*c==n)
            {printf("%d",n);
             if(t<=3)
             {
                 printf(" ");
                 t++;
             }

            }
    }
    return 0;
}
