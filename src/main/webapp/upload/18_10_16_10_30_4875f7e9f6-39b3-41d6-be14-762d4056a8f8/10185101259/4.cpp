#include<stdio.h>
int main()
{
    char X=0,A='A',Z='Z';
    printf("");
    scanf("%c",&X);
    if(X>=A&&X<=Z)
    {
        X=X+'a'-'A';
        printf("%c",X);}
    else
    printf("ERROR");
    return 0;


}