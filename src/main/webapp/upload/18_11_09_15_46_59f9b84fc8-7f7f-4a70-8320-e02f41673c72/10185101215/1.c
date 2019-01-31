#include<stdio.h>
#include<math.h>
int main()
{
   int x,y=6;
   for(x=0;x<=9;x++)
   {
       if((x+y)%3==0)
       {
           if(x<9)
        printf("%d ",10*x+y);
        if(x==9)
        printf("%d",10*x+y);
       }
   }


   return 0;
}