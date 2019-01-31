#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
    float sum;
    float a=100.0;
    float j=100.0;

    for(n=1;n<=10;n++)
    {

       j=j/2;
       a+=j*4;

    }
    sum=a-200;
   printf("%.3f %.3f",sum,j);

    return 0;
}
