#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n,m=0;
    for(a=0;a<10;a++) for(b=0;b<10;b++) for(c=0;c<10;c++){
        if((a*a*a+b*b*b+c*c*c==a*100+b*10+c)&&(a*a*a+b*b*b+c*c*c>=100)&&(a*a*a+b*b*b+c*c*c<1000)){
         n=a*a*a+b*b*b+c*c*c;
         printf("%d",n);
         m++;
         if(m<4) printf(" ");
         }
    }}
