#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Alice,Bob;
    scanf("%c %c",&Alice,&Bob);
    if(Alice=='S')
    {
        switch(Bob)
        {
        case 'S':
            printf("Tie");
            break;
        case 'R':
            printf("Bob");
            break;
        default:
            printf("Alice");
            break;
        }
    }
    else if(Alice=='R')
    {
        switch(Bob)
        {
            case 'R':
            printf("Tie");
            break;
        case 'C':
            printf("Bob");
            break;
        default:
            printf("Alice");
            break;
        }
    }
    else if(Alice=='C')
    {
        switch(Bob)
        {
            case 'C':
            printf("Tie");
            break;
        case 'S':
            printf("Bob");
            break;
        default:
            printf("Alice");
            break;
        }
    }
    return 0;
}
