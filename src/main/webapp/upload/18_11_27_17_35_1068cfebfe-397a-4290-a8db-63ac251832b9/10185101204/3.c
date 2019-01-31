#include <stdio.h>
int main()
{float mmm[5];
long dd[5];
long cc[5];
for(int i=0;i<5;i++)
{scanf("%f",&mmm[i]);
dd[i]=(long)(mmm[i]*100)/100;
cc[i]=(long)(mmm[i]*100)%100;}
for(int p=0;p<4;p++)
printf("$%ld.%.2ld ",dd[p],cc[p]);
printf("$%ld.%.2ld",dd[4],cc[4]);
return 0;}
