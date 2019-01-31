#include<stdio.h>
#include<stdlib.h>
int main()
{ int i;
 long long int sum1=1,sum2=2;
 double myout=0.0;
 for(i=0;i<50;i++)
 {  myout+=(double)sum2/(double)sum1;
    long long t=sum2;
    sum2=sum2+sum1;
    sum1=t;
}
printf("%.2lf",myout);
return 0;
}