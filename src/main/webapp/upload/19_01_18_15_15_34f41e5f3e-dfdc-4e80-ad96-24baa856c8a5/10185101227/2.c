#include <stdio.h>
#include <stdlib.h>

int main()
{
   float e,i,n;
   e=1;i=1;n=1;
   while (n<1E6)
   {e=e+1/i;
   n++;
   i=i*n;}
   printf("%0.6f",e);
    return 0;
}
