#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
int a=0;
while(x!=0)
{if(x%2==1)
a++;
x=x/2;
}

printf("%d",a);
return 0;
 } 