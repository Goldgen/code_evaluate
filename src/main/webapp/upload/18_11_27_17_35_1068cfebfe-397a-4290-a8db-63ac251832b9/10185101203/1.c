#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number[5];
    double a=0.00f,all=0;
    int i;
    scanf("%lf %lf %lf %lf %lf",&number[0],&number[1],&number[2],&number[3],&number[4]);
    for(i=0;i<4;i++)
        {a=1.00/number[i];
        all+=a;
        printf("%.2f ",a);}
    a=1.00/number[4];
    printf("%.2f\n",a);
    all+=a;

    printf("%.6f",all);


}
