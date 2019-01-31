#include <stdio.h>
int main()
{
int i;
double sum1,sum2,sum;
double data[100];
for(i=1;i<=100;i++){
data[i]=1.0/((2*i)*(2*i+1)*(2*i+2));
if(i%2==0)
sum1+=data[i];
else
sum2+=data[i];
sum=sum2-sum1;
}printf("%.4lf",sum*4.0+3.0);
return 0;
}