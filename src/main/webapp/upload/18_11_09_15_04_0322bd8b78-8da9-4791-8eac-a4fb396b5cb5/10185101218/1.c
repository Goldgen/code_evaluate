#include<stdio.h>
int main(void)
{
    char A,B;
    scanf("%c %c",&A,&B);
    if(((A=='S')&&(B=='C'))||((A=='R')&&(B=='S'))||((A=='C')&&(B=='R')))
        printf("Alice");
    else if(A==B)
        printf("Tie");
    else
        printf("Bob");
    return 0;
}
