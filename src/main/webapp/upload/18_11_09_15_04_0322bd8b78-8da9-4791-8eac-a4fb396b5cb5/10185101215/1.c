#include<stdio.h>
int main()
{
    char x,y;
    scanf("%c %c",&x,&y);
    if(x=='S'&&y=='C')
    printf("Alice");
    if(x=='R'&&y=='S')
    printf("Alice");
    if(x=='C'&&y=='R')
    printf("Alice");
    if(x=='S'&&y=='S')
    printf("Tie");
    if(x=='R'&&y=='R')
    printf("Tie");
    if(x=='C'&&y=='C')
    printf("Tie");
    if(x=='S'&&y=='R')
    printf("Bob");
    if(x=='R'&&y=='C')
    printf("Bob");
    if(x=='C'&&y=='S')
    printf("Bob");
    return 0;
}
