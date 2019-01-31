#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i;
    if(n<2)return 0;
    for(i=2;i<=sqrt(n);i++)
    if(n%i==0)return 0;
    return 1;
}

int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=2;i<x/2;i++)
    if(prime(i)&&prime(x-i))
   {
	   if(i<x-i)
	   {printf("%d=%d+%d",x,i,x-i);}
	   else
	   {printf("%d=%d+%d=%d=%d",x,i,x-i,x-i,i);}
       return 0;
   }
}