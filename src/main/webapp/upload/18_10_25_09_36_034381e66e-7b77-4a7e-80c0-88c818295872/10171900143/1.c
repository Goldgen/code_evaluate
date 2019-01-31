#include <stdio.h>
#include <math.h>


int main()
{
   double a[11];
   a[0]=100;
   for (int i=1;i<=10;i++){
    a[i]=0.5*a[i-1];
   }
    double s;
    s+=a[0];
    for(int i=1;i<10;i++){
        s+=2*a[i];
    }
    printf("%.3f %.3f",s,a[10]);
    return 0;
}
