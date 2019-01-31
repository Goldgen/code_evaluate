#include<stdio.h>
int main(void)
{
    int a,b,c;
    for(a=1;a<14;a++)
    {
       for(b=1;b<31;b++)
       {
           for(c=3;c<91;c=c+3)
            if(a+b+c==100)
           {
               if(a*7+b*5+c/3==100)
               {
                printf("%d %d %d",a,b,c);
                return 0;
               }
           }
       }
    }
}
