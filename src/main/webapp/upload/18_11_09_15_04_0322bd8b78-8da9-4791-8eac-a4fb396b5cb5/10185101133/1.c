#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A,B;
    scanf("%c %c",&A,&B);
        if((A=='S' && B=='R') || (A=='R' && B=='C')
         ||(A=='C' && B=='S'))
            printf("Bob");
        else if((A=='R' && B=='S') || (A=='C' && B=='R')
         ||(A=='S' && B=='C'))
            printf("Alice");
        else
            printf("Tie");
    return 0;
}
