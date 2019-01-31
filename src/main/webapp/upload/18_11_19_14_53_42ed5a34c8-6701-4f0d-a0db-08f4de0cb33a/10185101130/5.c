#include <stdio.h>
#include <stdlib.h>

int GDB(int a,int b);

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",GDB(m,n));
    return 0;
}

int GDB(int a,int b)
{
    if(b > 0)
        GDB(b,a%b);
    else
        return a;
}
