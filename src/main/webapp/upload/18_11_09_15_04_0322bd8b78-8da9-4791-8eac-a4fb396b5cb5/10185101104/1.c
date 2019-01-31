#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a=='S')
    {
        if(b=='R')
            printf("Bob");
        else if(b=='S')
            printf("Tie");
        else
            printf("Alice");
    }
    else if(a=='R')
    {
        if(b=='R')
            printf("Tie");
        else if(b=='S')
            printf("Alice");
        else
            printf("Bob");
    }
    else if(a=='C')
    {
        if(b=='R')
            printf("Alice");
        else if(b=='S')
            printf("Bob");
        else
            printf("Tie");
    }
    return 0;
}
