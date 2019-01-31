#include <stdio.h>
#include <stdlib.h>

int cal(int n,int m)
{
    static int x=0;
    if(m==0)
        x=n;
    if(m>0)
        x=cal(m,n%m);
        return x;

}
int main()
{
   int n=0;
   int m=0;
   scanf("%d %d",&n,&m);
   printf("%d",cal(n,m));

    return 0;
}
