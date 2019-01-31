#include <stdio.h>

int gdb(int a,int b)
{
    if(b==0)
        return a;
    return gdb(b,a%b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gdb(a,b));
    return 0;
}
