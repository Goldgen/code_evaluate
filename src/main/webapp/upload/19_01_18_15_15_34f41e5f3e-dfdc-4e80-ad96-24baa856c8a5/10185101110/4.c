#include<stdio.h>
int main()
{float a,max,min;
a=1;
max=0;
min=100;

while(1)
{
	scanf("%f",&a);
	if(a<0)
	break;
	if(a>max)
	max=a;
	if(a<min)
	min=a;
}
 printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
return 0;
 } 