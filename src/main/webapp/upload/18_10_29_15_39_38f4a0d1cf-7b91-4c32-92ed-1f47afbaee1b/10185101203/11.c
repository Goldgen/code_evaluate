#include <stdio.h>
int main()
{
int a,b,c,d;
for(a=1;a<=9;a++)
    for(b=0;b<=9;b++)
        for(c=0;c<=9;c++)
            {d=100*a+10*b+c;
            if(d==a*a*a+b*b*b+c*c*c&&a!=4)
                printf("%d ",d);
                else if(d==a*a*a+b*b*b+c*c*c)
                    printf("%d",d);

            }
}
