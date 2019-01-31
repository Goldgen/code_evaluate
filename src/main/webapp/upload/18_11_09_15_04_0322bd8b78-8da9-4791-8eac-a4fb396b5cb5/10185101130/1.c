#include<stdio.h>

int main(void)
{
    char Alice,Bob;
    scanf("%c %c",&Alice,&Bob);
    if(Alice == Bob)
        printf("Tie");
    else if(Alice == 'S')
    {
        if(Bob == 'R')
            printf("Bob");
        else
            printf("Alice");
    }
    else if(Alice == 'R')
    {
        if(Bob == 'S')
            printf("Alice");
        else
            printf("Bob");
    }
    else
    {
        if(Bob == 'S')
            printf("Bob");
        else
            printf("Alice");
    }
    return 0;
}
