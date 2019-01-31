#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char A,B;
    scanf("%c %c",&A,&B);
    if(A=='S'){
        if(B=='S')printf("Tie");
        else if (B=='R')printf("Bob");
        else printf("Alice");
    }
    else if(A=='R'){
        if(B=='S')printf("Alice");
        else if(B=='R')printf("Tie");
        else printf("Bob");
    }
    else {
        if(B=='C')printf("Tie");
        else if(B=='S')printf("Bob");
        else printf("Alice");
    }
    return 0;
}

