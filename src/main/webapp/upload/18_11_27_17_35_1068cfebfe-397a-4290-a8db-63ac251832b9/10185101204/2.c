#include <stdio.h>
int main()
{double a=0;
double data[100];
for(int i=2,j=0;j<100;i=i+2,j++)
data[j]=1.0/(i*(i+1)*(i+2));
for(int k=0;k<100;k=k+2)
a=a+data[k]-data[k+1];
a=4.0*a+3.0;
printf("%.4f",a);
return 0;
}