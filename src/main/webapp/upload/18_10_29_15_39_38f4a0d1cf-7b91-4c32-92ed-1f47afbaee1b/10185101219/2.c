 #include<stdio.h>
#include<math.h>
int main()
{
int n=1;
float e=1,t=1,f=1;
do{
f=f*n;
t=1/f;
e=e+t;
n++;
}while (t>=1e-6);
printf("%.6f",e);
return 0;
}
