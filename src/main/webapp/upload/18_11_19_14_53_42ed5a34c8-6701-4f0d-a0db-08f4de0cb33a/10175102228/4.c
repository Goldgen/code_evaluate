#include<stdio.h>
#include<stdlib.h>
void dectobin(int n)
{
    if(n>0)
   {dectobin(n/2);
   printf("%d",n%2);
   }
}
int main()
{ int n;
scanf("%d",&n);
dectobin(n);
return 0;

}