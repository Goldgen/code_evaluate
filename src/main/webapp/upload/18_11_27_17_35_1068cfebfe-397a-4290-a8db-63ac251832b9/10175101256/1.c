#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double pi=3.1415926;
int main()
{
     double a[5],b[5],sum=0;
     for(int i=0;i<5;i++){
        scanf("%lf",&a[i]);
        b[i]=1/a[i];
        sum+=b[i];
        if(i)
            printf(" ");
        printf("%.2f",b[i]);
     }
     printf("\n%.6f",sum);
}

