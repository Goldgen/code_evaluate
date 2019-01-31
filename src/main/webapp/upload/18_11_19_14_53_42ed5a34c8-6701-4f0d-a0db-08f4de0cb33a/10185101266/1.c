#include<stdio.h>
int main()
{
    float a,m,s=0;
    int n=1;
    while(scanf("%f",&a)&&a!=-1)
    {   s=s+a;
        m=s/n;
        n++;
        printf("%.2f\n",m);
    }
}
