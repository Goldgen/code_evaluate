#include <stdio.h>
#include <stdlib.h>
int GDB(int a,int b);
int main()
{
   int i,j;
   scanf("%d %d",&i,&j);
   printf("%d",GDB(i,j));
   return 0;
}
int GDB(int a,int b)
{
   if(b==0)
   {
       return a;
   }
   if(b>0)
   {
       return GDB(b,a%b);
   }
}
