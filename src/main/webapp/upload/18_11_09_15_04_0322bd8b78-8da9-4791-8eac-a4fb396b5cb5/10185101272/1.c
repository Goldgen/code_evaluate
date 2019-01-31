#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a==b) printf("Tie");
    else{
        if(a=='S'&&b=='C'||a=='C'&&b=='R'||a=='R'&&b=='S') printf("Alice");
        else printf("Bob");
    }
    return 0;
}
