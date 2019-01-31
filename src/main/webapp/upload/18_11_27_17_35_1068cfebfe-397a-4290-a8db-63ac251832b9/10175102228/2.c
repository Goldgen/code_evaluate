#include<stdio.h>
#include<stdlib.h>
int main()
{ double a[100];
 int i;
 int k=2;
 double denominator,result=0.0;
  for(i=0;i<100;i++)
  { denominator=(double)(k*k*k+3*k*k+2*k);
	 a[i]=1.0/denominator;
    if(i%2!=1)result=result+a[i];
     else result=result-a[i];
     k+=2;
  }
 printf("%.4lf",result*4.0+3.0);
 return 0;
 
}