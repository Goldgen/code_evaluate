#include <stdio.h>
int main()
{
    char A,B;
    scanf("%c %c",&A,&B);
    if ((A=='S')&&(B=='C'))
        printf("Alice");
    if ((A=='S')&&(B=='R'))
        printf("Bob");
    if ((A=='R')&&(B=='C'))
        printf("Bob");
    if ((A=='R')&&(B=='S'))
        printf("Alice");
    if ((A=='C')&&(B=='S'))
        printf("Bob");
    if ((A=='C')&&(B=='R'))
        printf("Alice");
    if (A==B)
        printf("Tie");
        return 0;
}
