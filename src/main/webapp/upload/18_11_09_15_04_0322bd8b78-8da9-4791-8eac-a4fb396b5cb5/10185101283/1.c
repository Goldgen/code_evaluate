#include<stdio.h>
int main()
{
    char x,y;
    scanf("%c %c",&x,&y);
    if((x=='S'&&y=='C')||(x=='R'&&y=='S')||(x=='C'&&y=='R'))
        printf("Alice");
    else if(x==y)
        printf("Tie");
    else
        printf("Bob");
    return 0;
}
