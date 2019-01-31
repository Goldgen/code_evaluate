#include <stdio.h>
int GDB(int m,int n)
{
    int a,b;
    if(n==0)
    return m;
    if(m>=n)
        {
            a=n;
            b=m%n;
            GDB(a,b);
        }
     else
        {
            a=m;
            b=n%m;
            GDB(a,b);
        }
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",GDB(m,n));
}