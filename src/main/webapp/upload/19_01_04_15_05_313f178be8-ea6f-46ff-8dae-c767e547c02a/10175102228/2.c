#include <stdio.h>
#include <stdlib.h>
int main()
{ int a,b,c;
scanf("%d+%d=%d",&a,&b,&c);
   if(a==0&&b==0)
	   printf("0");
  else if(a==0&&b!=0)
   { int x=c;
   int out=0;
   while(x!=b)
   { x=x/10;
       out++;
   }
     printf("-%d",out);
   }
   else if(b==0&&a!=0)
   { int x=c;
     int out=0;
     while(x!=a)
     {x=x/10;
         out++;
     }
       printf("%d",out);
   }
  else
  {int x=c-b;
    if(x%a==0)
  {  int out=0;
      while(x!=a)
      { x=x/10;
          out++;
        }
      printf("%d",out);
  }
  else
    { int y=c-a;
      int out=0;
      while(y!=b)
      { y=y/10;
          out++;
      }
      printf("-%d",out);
   }
  }
   return 0;

}
