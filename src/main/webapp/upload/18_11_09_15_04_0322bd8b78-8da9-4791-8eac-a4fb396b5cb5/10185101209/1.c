#include<stdio.h>

int main()
{
    char Alice, Bob;

    scanf("%c %c", &Alice, &Bob);
    if((Alice == 'S' && Bob == 'R')
       ||(Alice == 'R' && Bob == 'C')
       ||(Alice == 'C' && Bob == 'S'))
        printf("Bob");
    else if((Alice == 'R' && Bob == 'S')
       ||(Alice == 'C' && Bob == 'R')
       ||(Alice == 'S' && Bob == 'C'))
       printf("Alice");
    else
        printf("Tie");
    return 0;
}