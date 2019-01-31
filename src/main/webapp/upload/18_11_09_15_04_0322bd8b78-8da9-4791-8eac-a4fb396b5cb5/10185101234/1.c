#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    char b;
    scanf("%c %c",&a,&b);
    if (a=='S')
    {
        if(b=='S')
            printf("Tie");
        else if(b=='R')
            printf("Bob");
        else
            printf("Alice");
    }
    else if(a=='R')
    {
        if(b=='R')
            printf("Tie");
        else if(b=='C')
            printf("Bob");
        else
            printf("Alice");
    }
    else
    {
        if(b=='C')
            printf("Tie");
        else if(b=='S')
            printf("Bob");
        else
            printf("Alice");
    }
    return 0;
}