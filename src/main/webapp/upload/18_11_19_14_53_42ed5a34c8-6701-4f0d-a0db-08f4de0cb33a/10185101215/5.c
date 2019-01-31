#include<stdio.h>
#include<math.h>
int main (void)
{
    int x,y,z,m,n;
    while(scanf("%d%d",&x,&y)==2)
    {
       m=x;n=y;
       while(y!=0)
       {
           z=x%y;
           x=y;
           y=z;
       }
       printf("%d\n",x);
    }

    return 0;
}
