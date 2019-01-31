#include <stdio.h>
#include <string.h>
int main()
{
    double num[50],sum=0,num1[50];
    int i;
    num[0]=2;
    num[1]=3;
    num1[0]=1;
    for(i=0;i<50;i++)
    {
        if(i>1)
            num[i]=num[i-1]+num[i-2];
        if(i>0)
            num1[i]=num[i-1];
        sum+=(num[i]/num1[i]);
    }
    printf("%.2lf",sum);
}