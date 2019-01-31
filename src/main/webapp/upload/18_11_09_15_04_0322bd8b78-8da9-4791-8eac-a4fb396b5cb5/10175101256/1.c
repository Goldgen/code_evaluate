#include <stdio.h>
#include <stdlib.h>
//S=83 R=82 C=67
int main()
{
    char Alice,Bob;
    scanf("%c %c",&Alice,&Bob);
    if(Alice==Bob)
        printf("Tie");
    else if(Alice==83){
        if(Bob==82)
            printf("Bob");
        else
            printf("Alice");
    }
    else if(Alice == 82){
        if(Alice>Bob)
            printf("Bob");
        else
            printf("Alice");
    }
    else if(Alice == 67){
        if(Bob==83)
            printf("Bob");
        else
            printf("Alice");
    }

    return 0;
}
