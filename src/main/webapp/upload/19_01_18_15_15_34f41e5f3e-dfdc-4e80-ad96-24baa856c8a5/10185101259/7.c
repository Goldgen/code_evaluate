#include <stdio.h>


int main()
{
int a;
int b=0;
scanf("%d",&a);
while(a>=1)
{
 if(a%2!=0)
  b++;
  a=a/2;
}
printf("%d",b);
return 0;
}
