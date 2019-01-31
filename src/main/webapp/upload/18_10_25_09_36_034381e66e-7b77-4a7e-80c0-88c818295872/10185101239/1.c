#include <stdio.h>
#include <stdlib.h>

int main()
{
float sum =100, hight = 100;
for (int i =1; i<10; i++)
{hight=hight/2.0;
sum =sum+2*hight;
}
printf("%.3f %.3f",sum,hight*0.5);
return 0;}
