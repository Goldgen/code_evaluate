#include <stdio.h>
int main(void)
{
   char ch1=0;
   char ch2=0;
   scanf("%c %c",&ch1,&ch2);
   if(ch1=='S')
   {
       if(ch2=='S')
        printf("Tie");
       else if(ch2=='R')
        printf("Bob");
       else
        printf("Alice");
   }
   if(ch1=='R')
   {
       if(ch2=='S')
        printf("Alice");
       else if(ch2=='R')
        printf("Tie");
       else
        printf("Bob");
   }
   if(ch1=='C')
   {
       if(ch2=='S')
        printf("Bob");
       else if(ch2=='R')
        printf("Alice");
       else
        printf("Tie");
   }
}
