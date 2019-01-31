#include <stdio.h>
int main()
{
    double in[5];
    double out[5];
    double sum=0;
    int i=0;
    for (i=0;i<5;i++)
    {
        scanf("%lf",&in[i]);
        out[i]=1.0/in[i];
        sum+=out[i];
        if(i==4)
           printf("%.2lf\n",out[i]);
        else printf("%.2lf ",out[i]);
    }
    printf("%.6lf",sum);
    return 0;
}
