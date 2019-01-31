#include <stdio.h>
int GDB(int,int);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",GDB(a,b));
    return 0;
}
int GDB(int m,int n)
{
    int a,b;
    a=(m>n?m:n);
    b=(m<n?m:n);
    if (a%b==0)
        return b;
        return GDB(b,a%b);
}
