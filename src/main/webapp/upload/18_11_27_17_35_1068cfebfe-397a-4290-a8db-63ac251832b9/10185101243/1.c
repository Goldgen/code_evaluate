#include <stdio.h>
#include <stdlib.h>



int main()
{
    double a[5];

    int i,j;
    for(i=0;i<=4;i++)
    {
        scanf("%lf",&a[i]);
    }


        for(j=0;j<=4;j++)
       {
        a[j]=1.0/a[j];
       }
        printf("%.2f %.2f %.2f %.2f %.2f\n",a[0],a[1],a[2],a[3],a[4]);
        printf("%.6f",a[0]+a[1]+a[2]+a[3]+a[4]);



return 0;
}
