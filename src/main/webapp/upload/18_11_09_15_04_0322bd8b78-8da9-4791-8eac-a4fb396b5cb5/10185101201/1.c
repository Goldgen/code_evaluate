#include <stdio.h>
main()
{
	char a,b;
	scanf("%c %c",&a,&b);
	if(a=='S')
        {
            if(b=='R')
        printf("Bob");
        else if(b=='C')
            printf("Alice");
            else if(b=='S')
                printf("Tie");
            }
    else if(a=='R')
        {
        if(b=='S')
        printf("Alice");
        else if(b=='C')
            printf("Bob");
            else if (b=='R')
                printf("Tie");
            }
    else if(a=='C')
        {
            if(b=='S')
        printf("Bob");
        else if(b=='R')
            printf("Alice");
            else if(b=='C')
                printf("Tie");
            }
}