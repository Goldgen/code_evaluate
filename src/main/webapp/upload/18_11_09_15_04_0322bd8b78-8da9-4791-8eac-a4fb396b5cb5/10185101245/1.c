#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a,b;
   scanf("%c %c",&a,&b);
   if(a==b)
     printf("Tie");
   else 
   {
       if((a=='S'&&b=='R')||(a=='R'&&b=='C')||(a=='C'&&b=='S'))
       printf("Bob");
   else
        printf("Alice");
   }



    return 0;
}
