#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double k(long long,long long);

int main()
{
    long long a[51];
    a[0]=a[1]=1;
    for(int i=2;i<=51;i++){
        a[i]=a[i-1]+a[i-2];

    }

    double sum=0;
    for(int i=1;i<=50;i++){
        sum+=k(a[i+1],a[i]);
    }
printf("%.2f",sum);

    return 0;
}



double k(long long a,long long b){
    return a*1.0/b;
}
