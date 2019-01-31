#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A,B;
    scanf("%c %c",&A,&B);
    if(A==B)
        printf("Tie");
        if(A=='S')
        {
            if(B=='C')
                printf("Alice");
            if(B=='R')
                printf("Bob");
        }
        else if(A=='R')
        {
            if(B=='C')
                printf("Bob");
            if(B=='S')
                printf("Alice");

        }
        else
        {
            if(B=='S')
                printf("Bob");
            if(B=='R')
                printf("Alice");
        }
        return 0;
}
