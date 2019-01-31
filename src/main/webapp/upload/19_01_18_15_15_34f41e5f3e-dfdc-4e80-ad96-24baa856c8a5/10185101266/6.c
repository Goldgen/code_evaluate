#include<stdio.h>
int main()
{
    int a,b,c,d,m;
    scanf("%d %d",&c,&d);
    if(c>d)
    {m=d;d=c;c=m;}
    a=c;
    b=d;
    while(b!=0)
    {m=a%b;
	 a=b;
	 b=m;}
    printf("最大公约数是: %d",a);
}
