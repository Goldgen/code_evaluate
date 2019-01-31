#include <stdio.h>
int gdb(int,int);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gdb(a,b));
    return 0;
}
int gdb(int a,int b)
{
    if(0==b)
    {
        return a;
    }
    if(b>0)return gdb(b,a%b);
}
