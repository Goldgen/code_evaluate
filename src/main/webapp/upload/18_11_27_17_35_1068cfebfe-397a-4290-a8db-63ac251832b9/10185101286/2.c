#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j;
    double amount=0;
    double k=0;
    double data[100]={0};
    for(i=0;i<100;++i)
    {
        data[i]=1;
        static double l=2;
        l-=1;
        for(j=0;j<3;++j)
        {
           ++l;
           data[i]=data[i]/l;
        }
    }
    for(i=0;i<100;++i)
    {
        if(i%2==0)
        {
            k=data[i];
        }
        else
        {
            k=-data[i];
        }
        amount+=k;
    }
    printf("%.4f",amount*4.0+3.0);
    return 0;
}
