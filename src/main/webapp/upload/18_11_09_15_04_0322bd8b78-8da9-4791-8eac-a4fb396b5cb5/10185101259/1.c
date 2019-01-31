#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A,B,s='S',c='C',r='R';
    scanf("%c %c",&A,&B);
    switch(A)
   {

   case'S':
    if(B==s)
        printf("Tie");
    if(B==r)
        printf("Bob");
    if(B==c)
        printf("Alice");
    break;
    case'R':
    if(B==s)
        printf("Alice");
    if(B==r)
        printf("Tie");
    if(B==c)
        printf("Bob");
    break;
    case'C':
    if(B==s)
        printf("Bob");
    if(B==r)
        printf("Alice");
    if(B==c)
        printf("Tie");
    break;
	
   }
    return 0;
}