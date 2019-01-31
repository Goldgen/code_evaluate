#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int n=5;
    double value[n];
    double reciprocal[n];
    double sum=0.0;
    for(int i=0;i<n;i++)
        scanf("%lf",&value[i]);
   for(int i=0;i<n;i++)
   {
       reciprocal[i]=1.0/value[i];
       sum+=reciprocal[i];
       printf("%.2lf",reciprocal[i]);
       if(i!=n-1)
        printf(" ");
   }
    printf("\n%.6lf",sum);
    return 0;
}
