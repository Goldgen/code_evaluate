#include<stdio.h>
int main()

{

double a;

double max=0,min=100;

int i;

for(i=0;i<100;i++)

{

scanf("%lf",&a);

if(a<0)

break;

else

{

if(a>max)

max=a;

if(a<min)

min=a;

}

}

printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);

return 0;

}
