#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b=0;
    scanf("%c %c",&a,&b);
    if(a==b)
        printf("Tie");
    else if(a=='S')
    {
        if(b=='R')
            printf("Bob");
        else printf("Alice");
    }
     else if(a=='R')
    {
        if(b=='C')
            printf("Bob");
        else printf("Alice");
    }
     else if(a=='C')
    {
        if(b=='S')
            printf("Bob");
        else printf("Alice");
    }
    return 0;
}
