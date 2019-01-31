#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c,x;
  int s=0,i=0;
  scanf("%d+%d=%d",&a,&b,&c);
  while(a+b<c)
  {  x=a;
      a=a*10;
      ++s;
      if (a+b==c) {++i;printf("%d",s);}
}
 if(i==0)
 {  s=0;
     while(a+b<c)
     {a=x;
     b=b*10;
     ++s;
     if (a+b==c) {++i;printf("-%d",s);}
     }
 }
 
}

