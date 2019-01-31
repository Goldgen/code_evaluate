#include <stdio.h>
#include <stdlib.h>


int main()
{
   char Bob;
   char Alice;
   scanf("%c %c",&Alice,&Bob);
   if(Bob=='S')
   {
       if(Alice=='S')
        printf("Tie");
       else if(Alice=='R')
        printf("Alice");
       else if(Alice=='C')
        printf("Bob");
   }
   if(Bob=='R')
   {
       if(Alice=='R')
        printf("Tie");
       else if(Alice=='C')
        printf("Alice");
       else if(Alice=='S')
        printf("Bob");
   }
   if(Bob=='C')
   {
       if(Alice=='C')
        printf("Tie");
       else if(Alice=='S')
        printf("Alice");
       else if(Alice=='R')
        printf("Bob");
   }
   return 0;
}

