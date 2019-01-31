#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a==b)
        printf("Tie");
    else if(a=='S'&&b=='R')
        printf("Bob");
    else if(a=='R'&&b=='C')
        printf("Bob");
    else if(a=='C'&&b=='S')
        printf("Bob");
    else
        printf("Alice");
    return 0;

}