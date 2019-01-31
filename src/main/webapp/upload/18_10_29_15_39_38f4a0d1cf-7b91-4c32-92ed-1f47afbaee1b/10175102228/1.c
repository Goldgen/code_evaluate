#include<stdio.h>
#include<stdlib.h>
int main()
{ int x;
 for(x=1;x<10;x++)
   { if((100-10*x)>0&&(100-10*x)%7==0&&(600+3*x)%7==0)
      printf("%d %d %d",x,(100-10*x)/7,(600+3*x)/7);

   }
   return 0;
}
