#include<stdio.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a==b)
        printf("Tie");
    else if(a=='C')
    {
        if(b=='R')printf("Alice");
        else printf("Bob");
    }
    else if(a=='R')
    {
        if(b=='S')printf("Alice");
        else printf("Bob");
    }
    else
    {
        if(b=='C')printf("Alice");
        else printf("Bob");
    }
    return 0;
}