#include <stdio.h>
int main()
{
   double data[100];
   double result=0.0;
   for(int x=0;x<100;x++)
     data[x]=1.0/((2*x+2)*(2*x+3)*(2*x+4));
    for(int x=0;x<100;x++)
    {
        if(x%2==0)
            result+=data[x];
        else
            result-=data[x];
    }
    printf("%.4lf\n",4.0*result+3.0);

    return 0;
}