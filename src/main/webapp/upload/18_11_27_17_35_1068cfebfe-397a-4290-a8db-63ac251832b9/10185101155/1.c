#include <stdio.h>
int main()
{
    double a[5];
    double b[5];
    for(int x=0;x<5;x++)
        scanf("%lf",&a[x]);
    for(int x=0;x<5;x++)
        b[x]=1.0/a[x];
     for(int x=0;x<5;x++)
     {
         printf("%.2lf",b[x]);
         if(x<4)
            printf(" ");
         if(x==4)
            printf("\n");
     }
     double result=0;
    for(int x=0;x<5;x++)
        result+=b[x];
    printf("%.6lf\n",result);

    return 0;
}