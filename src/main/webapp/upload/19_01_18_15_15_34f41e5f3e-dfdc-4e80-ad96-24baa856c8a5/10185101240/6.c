#include<stdio.h>
int main()
{
    int a,b,t;
	unsigned int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
    {
     t=num1;
     num1=num2;
     num2=t;
     }
     a=num1,b=num2;
     while(a%b!=0)
    {
     t=a%b;
      a=b;
      b=t;
     }
     printf("最大公约数是: %d",b);
     return 0;
}