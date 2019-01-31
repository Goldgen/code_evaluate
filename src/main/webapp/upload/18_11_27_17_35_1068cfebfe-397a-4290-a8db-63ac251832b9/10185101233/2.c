#include<stdio.h>
int main()
{
    double data[100];
    int i=2,j=3,k=4,count=0;
    while(count<100)
    {
        data[count]=1.0/(i*j*k);
        i+=2;
        j+=2;
        k+=2;
        count++;
    }
    double sum_1=0.0,sum_2=0.0,sum=0.0;
    int x=0,y=1;
    while(x<=98)
    {
        sum_1+=data[x];
        x+=2;
    }
    while(y<=99)
    {
        sum_2+=data[y];
        y+=2;
    }
    sum=(sum_1-sum_2)*4.0+3.0;
    printf("%.4lf",sum);
    return 0;
}

