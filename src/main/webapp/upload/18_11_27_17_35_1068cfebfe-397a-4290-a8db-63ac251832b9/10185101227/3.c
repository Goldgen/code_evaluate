#include <stdio.h>
#include <stdlib.h>
int main()
{  float n;
   float amount [5];
   for(int i=0;i<5;++i)
   {
       scanf("%f",&n);
       amount[i]=n;
   }
   long dollars[5];
   long cents[5];
   for(int i=0;i<5;++i)
   {
    dollars[i]=amount[i];
   }
   for(int i=0;i<5;++i)
   {
    cents[i]=(amount[i]*10000-dollars[i]*10000)/100;
    }
   for(int i=0;i<5;i++)
    {
        if(cents[i]<10)
        {
            if(i==4)
           printf("$%ld.0%ld",dollars[i],cents[i]);
        else
           printf("$%ld.0%ld ",dollars[i],cents[i]);
        }
        else{
        if(i==4)
           printf("$%ld.%ld",dollars[i],cents[i]);
        else
           printf("$%ld.%ld ",dollars[i],cents[i]);
        }
    }
   return 0;
}

