#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=2;
   double height=100.0;
   double sum=100.0;
   while(i<=10)
    {
    height=height/2.0;
    sum=sum+height*2;
    i++;
    }
    printf("%.3lf %.3lf",sum,height/2.0);
    return 0;
}
