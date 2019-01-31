#include<stdio.h>
#include<stdlib.h>
int main()
{ char c1,c2;
   scanf("%c %c",&c1,&c2);
    if(c1==c2)printf("Tie");
    else if((c1=='S'&&c2=='C')||(c1=='R'&&c2=='S')||(c1=='C'&&c2=='R'))printf("Alice");//Alice wins
    else if((c1=='S'&&c2=='R')||(c1=='R'&&c2=='C')||(c1=='C'&&c2=='S'))printf("Bob");//lose
   return 0;

}
