#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   scanf("%d",&a);//input number from 1 to 99;
   int b=a%10;
   int c=(a-b)/10;
   printf("%d %d",b,c);
   return 0;
}
