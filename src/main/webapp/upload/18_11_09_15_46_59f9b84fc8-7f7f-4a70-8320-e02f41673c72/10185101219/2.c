#include <stdio.h>
#include <stdlib.h>

int main()
{
    double t,x=2.0,y=1.0;
    double sum=0.0;
    int dot=0;
do
    {sum=sum+x/y;
     t=x;
     x=t+y;
     y=t;
     dot=dot+1;
    }
while(dot!=50);
    printf("%.2lf",sum);
    return 0;
}
