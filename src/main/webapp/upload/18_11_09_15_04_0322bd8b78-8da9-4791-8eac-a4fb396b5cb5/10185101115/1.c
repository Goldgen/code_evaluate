#include <stdio.h>
#include <stdlib.h>

int main()
{char a,b;
scanf("%c %c",&a,&b);
if(a==b)
    printf("Tie");
if(a=='S'&&b=='R')
    printf("Bob");
if(a=='S'&&b=='C')
    printf("Alice");
if(a=='R'&&b=='C')
    printf("Bob");
if(a=='R'&&b=='S')
    printf("Alice");
if(a=='C'&&b=='R')
    printf("Alice");
if(a=='C'&&b=='S')
    printf("Bob");
    return 0;
}