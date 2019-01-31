#include<stdio.h>
#include<string.h>
#define N 1000

int i;
int main()
{
    int j=2;
    double a[100],sum;
    for(i=0;i<100;i++,j+=2){
        a[i]=1.0/(j*(j+1)*(j+2));
    }
    sum=a[0];
    for(i=0;i<98;){
        sum=sum-a[++i]+a[++i];
    }
    sum-=a[99];
    sum=sum*4.0+3.0;
    printf("%.4f",sum);
    return 0;
}
