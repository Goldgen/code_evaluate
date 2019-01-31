#include<stdio.h>
int main()
{int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,sum=0;
scanf("%d %d %d\n%d %d %d\n%d %d",&a,&b,&c,&d,&e,&f,&g,&h);
sum=a+b+c+d+e+f+g+h;
printf("%d\n",sum);
scanf("%d,%d,%d\n%d,%d,%d\n%d,%d",&a,&b,&c,&d,&e,&f,&g,&h);
sum=a+b+c+d+e+f+g+h;
printf("%d",sum);
return 0;


}