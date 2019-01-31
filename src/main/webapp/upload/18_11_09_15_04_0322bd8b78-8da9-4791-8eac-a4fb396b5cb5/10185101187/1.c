#include <stdio.h>

int main()
{
    char A, B;
    scanf("%c %c", &A, &B);

    if(A=='S')
    {
        if(B=='R')
            printf("Bob");
        else if(B=='C')
            printf("Alice");
        else
            printf("Tie");
    }
    else if(A=='R')
    {
        if(B=='C')
            printf("Bob");
        else if(B=='S')
            printf("Alice");
        else
            printf("Tie");
    }
    else if(A=='C')
    {
        if(B=='S')
            printf("Bob");
        else if(B=='R')
            printf("Alice");
        else
            printf("Tie");
    }
}
