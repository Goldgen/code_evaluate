#include <stdio.h>
int main()
{double a=0;
double ttt[5];
double ddd[5];
for(int i=0;i<5;i++)
{scanf("%lf",&ttt[i]);
ddd[i]=1.0/ttt[i];
a+=ddd[i];}
printf("%.2f",ddd[0]);
for(int j=1;j<=4;j++)
printf(" %.2f",ddd[j]);
printf("\n%.6f",a);
return 0;
}