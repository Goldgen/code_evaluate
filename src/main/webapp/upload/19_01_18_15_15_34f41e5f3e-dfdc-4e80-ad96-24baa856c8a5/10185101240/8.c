#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int c=1;
    int h=n;
    while (h/10!=0)
   {
	  c++;
      h=h/10; 
    }
    printf("%d ",c);
    int k=1;
    int t=m%c;
    for(int j=1;j<=t;j++)
   {
      k=k*10;
    }
    int x=n%k, y=n/k;
    if(y==0)
   {
       printf("%d",x);
    }
     else
    {
      printf("%d%d",x,y);
    }
    return 0;
}