#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
int b=0;
scanf("%d",&a);
while(a>=1)
{
    
        if(a%2!=0)
      b+=1;
      a=a/2;
}
printf("%d",b);
return 0;
}
