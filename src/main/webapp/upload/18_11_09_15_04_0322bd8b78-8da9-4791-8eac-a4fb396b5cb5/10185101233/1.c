#include<stdio.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a=='S'&&b=='C')
    printf("Alice");
    if(a=='R'&&b=='S')
    printf("Alice");
    if(a=='C'&&b=='R')
    printf("Alice");
    if(a=='S'&&b=='R')
        printf("Bob");
    if(a=='R'&&b=='C')
        printf("Bob");
    if(a=='C'&&b=='S')
        printf("Bob");
    if(a=='S'&&b=='S')
        printf("Tie");
    if(a=='R'&&b=='R')
        printf("Tie");
    if(a=='C'&&b=='C')
        printf("Tie");
    return 0;
}
