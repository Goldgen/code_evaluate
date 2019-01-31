#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   int i,j,m,n,x,y;
   scanf("%d+%d=%d",&a,&b,&c);
   x=a;
   y=b;
   for(i=0,n=0;i<10;i++)
   {
       if(c==x+b)
       {
           n++;
           break;
       }
       x=x*10;
   }
   for(j=0,m=0;j<10;j++)
   {
       if(c==a+y)
       {
           m++;
           break;
       }
       y=y*10;
   }
   j=-j;
   if(n>0&&m>0)
    printf("%d",i);
    else if(n>0&&m==0)
    {
        printf("%d",i);
    }
    else if(m>0&&n==0)
    {
        printf("%d",j);
    }
    return 0;
}
