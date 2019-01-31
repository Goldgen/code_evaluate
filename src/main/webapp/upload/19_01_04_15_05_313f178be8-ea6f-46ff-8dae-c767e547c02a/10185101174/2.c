#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   int times=0;
   scanf("%d+%d=%d",&a,&b,&c);
   int second=c-b;
   if(second%a==0){
    while(a!=second){
        a*=10;
        times++;
    }
   }

   if(times==0){
        int third;
        third=c-a;
        while(third!=b){
            b*=10;
            times--;
        }
   }
   printf("%d",times);
}


