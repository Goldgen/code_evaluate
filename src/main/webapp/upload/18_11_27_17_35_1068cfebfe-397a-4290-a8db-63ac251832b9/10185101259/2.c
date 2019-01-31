#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[100],sum,pre;
    int i,n=1;
    for(i=0;i<100;i++)
 {
    data[i]=1.0/((2*n)*(2*n+1)*(2*n+2));
    n=n+1;
 }
    for(i=0;i<100;i++){
    pre=pow(-1,i);
    sum=sum+pre*data[i];
    }
    sum=sum*4.0+3.0;
    printf("%.4lf",sum);

}
