#include<stdio.h>
#include<math.h>
int main()
{
int x,x1,n,i,c;
scanf("%d %d",&x,&i);
x1=x;
int a=0;
while(x!=0)
{
a++;
x=x/10;
}
printf("%d ",a);
i=i%a;
c=(pow(10,i));
n=x1%c;
x1=x1/c+n*pow(10,a-i);

printf("%d",x1);
return 0;
 } 