#include <stdio.h>
#include <stdlib.h>
int sushu(int a)
{int i,m=1;
    for(i=2;i<a;i++)
    {if(a%i==0)
        m=0;
    }
    return m;
    }
int main()
{int a,b;
 scanf("%d",&a);
 printf("%d",a);
 for(b=2;b<=a/2;b++)
 {int c;
 c=a-b;
     if((sushu(b)!=0)&&(sushu(c)!=0))

 printf("=%d+%d",b,c);

 }
  return 0;
}
