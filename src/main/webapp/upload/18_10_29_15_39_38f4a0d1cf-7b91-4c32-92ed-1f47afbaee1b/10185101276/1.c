#include <stdio.h>
#include <string.h>
int main()
{
    int a=0,b=0,c=0;
    int sum=100;
    int i=0,e=0,m=0;
    for (i=1;i<=14;i++)
    {
        for(e=1;e<=20;e++)
        {
            for(m=3;m<=300;m+=3){
               if(7*i+5*e+m/3==sum&&i+e+m==100){
                    c=m;
                    b=e;
                    a=i;
               }
            }

        }
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
