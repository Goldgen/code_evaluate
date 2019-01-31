#include <stdio.h>
int main()
{
    double arry1[5],arry2[5],sum=0.0;
    for(int i=0;i<5;i++)
    {
        scanf("%lf",&arry1[i]);
        arry2[i]=1.0/arry1[i];
        sum+=arry2[i];
    }
    printf("%.2lf %.2lf %.2lf %.2lf %.2lf",arry2[0],arry2[1],arry2[2],arry2[3],arry2[4]);
    printf("\n%.6lf",sum);
    return 0;
}
