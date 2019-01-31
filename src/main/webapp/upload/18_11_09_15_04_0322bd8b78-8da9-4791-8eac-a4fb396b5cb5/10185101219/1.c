#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x,y;


    scanf("%c %c",&x,&y);
    if(x==y)
        printf("Tie");
    else if(x=='S'&&y!='R')
        printf("Alice");
    else if(x=='R'&&y!='C')
        printf("Alice");
    else if(x=='C'&&y!='S')
        printf("Alice");
    else
        printf("Bob");
    return 0;
}
