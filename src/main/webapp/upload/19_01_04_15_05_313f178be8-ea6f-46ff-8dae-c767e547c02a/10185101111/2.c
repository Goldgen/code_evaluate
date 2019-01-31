#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
   int a,b,c;
   scanf("%d+%d=%d",&a,&b,&c);
   int i,t,limit=0;
   int m=a,n=b;
   for(i=0;i<=9;i++){
    if(m+b==c){
        limit=1;
        break;
    }
    m*=10;
   }
   if(limit==0){
   for(t=1;t<=9;t++){
    n*=10;
    if(a+n==c)
        break;
   }
   }
   if(limit)
    printf("%d",i);
   else
    printf("-%d",t);
}