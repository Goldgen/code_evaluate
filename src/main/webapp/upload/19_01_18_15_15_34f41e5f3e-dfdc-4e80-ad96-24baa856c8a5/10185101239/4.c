#include <stdio.h>
#include <stdlib.h>
int main()
{
float a,max,min;
scanf("%f",&a);
max=a;
min=a;
while(a>=0)
{
 if(a>max)
    max=a;
else if(a<min)
    min=a;
scanf("%f",&a);}
printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
return 0;
}