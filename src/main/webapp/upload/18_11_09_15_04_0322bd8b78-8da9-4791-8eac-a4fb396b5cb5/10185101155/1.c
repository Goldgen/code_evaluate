#include <stdio.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a=='S')
    {
        if(b=='S')
            printf("Tie");
        else if(b=='R')
            printf("Bob");
        else
            printf("Alice");
    }
     if(a=='R')
    {
        if(b=='R')
            printf("Tie");
        else if(b=='C')
            printf("Bob");
        else
            printf("Alice");
    }
     if(a=='C')
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