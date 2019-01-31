#include<stdio.h>
int main()
{
    for(int a=1;a<=100;++a)
      {
        for(int b=1;b<=100;++b)
        {
         for(int c=3;c<=100;c=c+3)
         {
          if((7*a+5*b+c/3==100)&&(a+b+c==100))
            printf("%d %d %d",a,b,c);
         }
        }
      }
     return 0;
}
