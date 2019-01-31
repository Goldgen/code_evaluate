#include <stdio.h>
int main()
{int a=1,b=1,c=1,sum=0;
 printf("153");
for(a=2;a<10;a++)
{for(b=0;b<10;b++)
  {for(c=0;c<10;c++)
      {sum=a*a*a+b*b*b+c*c*c;
       if(sum==100*a+10*b+c)
        printf(" %d",sum);}}}
}