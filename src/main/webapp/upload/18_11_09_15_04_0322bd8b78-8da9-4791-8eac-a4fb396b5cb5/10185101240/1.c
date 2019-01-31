#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a=='C'&&b=='R')
        printf("Alice");
    else if(a=='S'&&b=='C')
        printf("Alice");
    else if(a=='R'&&b=='S')
        printf("Alice");
    else if(a=='S'&&b=='S'||a=='R'&&b=='R'||a=='C'&&b=='C')
        printf("Tie");
    else printf("Bob");
    return 0;
}
