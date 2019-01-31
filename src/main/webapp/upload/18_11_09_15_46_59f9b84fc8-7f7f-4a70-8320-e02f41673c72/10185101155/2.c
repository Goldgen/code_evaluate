#include <stdio.h>
int main()
{
    double m;
    double total=0;
    double x,y,a;
    x=2.0;
    y=1.0;
     for(m=1.0;m<=50.0;m++)
     {
        total+=x/y;
        a = x;
        x = x+y;
        y = a;
     }

   printf("%.2lf",total);
    return 0;
}