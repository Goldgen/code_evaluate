#include<stdio.h>
int main()
{
double data[201];
int i,w=0,b=0;
double q=0,sum=0;
float sign=1.0;
for(i=2;i<=200;)
{
b++;

data[i]=1.0/(i*(i+1)*(i+2));

i=i+2;
}

for(i=2;i<=200;)
{
w++;
sum=sum+(sign)*data[i];
q=sum*4.0+3.0;
i=i+2;
sign=(-1)*sign;

}
printf("%.4lf\n",q);
return 0;
}
