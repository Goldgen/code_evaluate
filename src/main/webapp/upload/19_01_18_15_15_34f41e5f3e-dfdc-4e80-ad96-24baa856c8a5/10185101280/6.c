#include<stdio.h>
int main()
{
int a=0,b=0,c=0;
scanf("%d%d",&a,&b);
c=a%b;
while(c)
{
    a=b;
    b=c;
    c=a%b;
}

printf("最大公约数是: %d",b);



}