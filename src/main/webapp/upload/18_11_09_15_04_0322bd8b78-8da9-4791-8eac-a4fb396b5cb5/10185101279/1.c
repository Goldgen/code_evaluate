#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<float.h>

int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if((a=='S'&&b=='C')||(a=='R'&&b=='S')||(a=='C'&&b=='R'))
        printf("Alice");
    else if((a=='S'&&b=='S')||(a=='R'&&b=='R')||(a=='C'&&b=='C'))
        printf("Tie");
    else
        printf("Bob");






    return 0;
}



