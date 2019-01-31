#include <stdio.h>
#include <stdlib.h>

int main()
{char a,b;
scanf("%c %c",&a,&b);
if((a=='S')&&(b=='C'))
    printf("Alice");
else if((a=='R')&&(b=='S'))
    printf("Alice");
else if((a=='C')&&(b=='R'))
    printf("Alice");
else if((a=='C')&&(b=='S'))
    printf("Bob");
else if((a=='S')&&(b=='R'))
    printf("Bob");
else if((a=='R')&&(b=='C'))
    printf("Bob");
else if(a==b)
		printf("Tie");
return 0;
}