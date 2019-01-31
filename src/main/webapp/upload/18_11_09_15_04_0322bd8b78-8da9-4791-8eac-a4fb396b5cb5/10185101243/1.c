#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x,y;
    scanf("%c %c",&x,&y);

          if(x==y)
           printf("Tie");

              else if((x='S')&&(y='R'))
            printf("Bob");
           else if((x='R')&&(y='S'))
            printf("Alice");
             else if((x='S')&&(y='C'))
            printf("Alice");
            else if((x='C')&&(y='S'))
            printf("Bob");
           else if((x='R')&&(y='C'))
            printf("Bob");
         else if((x='C')&&(y='R'))
            printf("Alice");
    return 0;
}



