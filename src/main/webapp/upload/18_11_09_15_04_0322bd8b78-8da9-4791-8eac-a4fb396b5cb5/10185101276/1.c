#include <stdio.h>
int main()
{
    char a;
    char b;
    scanf("%c %c",&a,&b);
    if(a=='S'){if(b=='S')printf("Tie");
              else if(b=='R')printf("Bob");
              else if(b=='C') printf("Alice");}
    else if(a=='R'){if(b=='S')printf("Alice");
                    else if(b=='R')printf("Tie");
                    else if(b=='C')printf("Bob");}
    else if(a=='C'){if(b=='S')printf("Bob");
                   else if(b=='R')printf("Alice");
                   else if(b=='C')printf("Tie");}
	return 0;
}
