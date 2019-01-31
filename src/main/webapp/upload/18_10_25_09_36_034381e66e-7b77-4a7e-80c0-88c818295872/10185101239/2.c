#include <stdio.h>
#include <stdlib.h>

int main()
{
float num[5];
float sum=0.0;
float ave;
int i;
for(i=0;i<5;i++)
{
scanf("%f",&num[i]);
sum+=num[i];
}
ave=sum/5;
printf("%.1f",ave);
return 0;}
