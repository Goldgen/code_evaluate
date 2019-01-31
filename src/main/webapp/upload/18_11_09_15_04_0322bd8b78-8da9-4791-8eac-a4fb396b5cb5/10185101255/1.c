#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;
    a=0;
    b=0;
    scanf("%c %c",&a,&b);
    switch(a)
    {
       case 'S':
        {switch(b)
       {case 'S':
        printf("Tie");
        break;
       case 'R':
        printf("Bob");
        break;
       case 'C':
        printf("Alice");
        break;
       default:
        ;}
        }
        break;
       case 'R':
    {switch(b)
        {case 'S':
        printf("Alice");
        break;
       case 'R':
        printf("Tie");
        break;
       case 'C':
        printf("Bob");
        break;
       default:
        ;}
        }
        break;
       case 'C':
        {switch(b)
        {case 'S':
        printf("Bob");
        break;
       case 'R':
        printf("Alice");
        break;
       case 'C':
        printf("Tie");
        break;
       default:
        ;}
        }
        break;
       default:
        ;
    }

    return 0;
}