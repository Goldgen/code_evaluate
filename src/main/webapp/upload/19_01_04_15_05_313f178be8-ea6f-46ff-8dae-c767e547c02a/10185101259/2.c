#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,temp1,temp2;
   scanf("%d+%d=%d",&a,&b,&c);


       int i=1;

       while(i<10)
       {
           temp1=a*i*10;
           if(temp1+b==c)
                printf("%d",i);
           i++;
       }
       i=1;
      while(i<10)
       {
           temp2=b*i*10;
           if(temp2+a==c)
                printf("-%d",i);
           i++;
       }
   return 0;
}
