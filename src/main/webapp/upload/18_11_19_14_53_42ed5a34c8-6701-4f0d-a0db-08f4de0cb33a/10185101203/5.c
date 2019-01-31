#include <stdio.h>
#include <stdlib.h>

int GDB(int a, int b)
{
    if(b>0)
        return GDB(b,a%b);
        printf("%d",a);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    GDB(a,b);
    return 0;
}
