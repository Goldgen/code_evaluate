#include<stdio.h>
int GDB(int,int);

int main(void)
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    printf("%d",GDB(a,b));
}

int GDB(int a,int b)
{
    int c = 0;
    int d = 0;
    if(b==0)
        return a;
    else if (a==0)
        return b;
    else if (a==b)
        return a;

    c = a%b;
    d = b%a;
    return GDB(c,d);
}
