#include<stdio.h>
int gdb(int,int);
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=gdb(a,b);
    printf("%d",x);
    return 0;
}
int gdb(int a,int b)
{
    if(0==b)return a;
    else return gdb(b,a%b);
}
