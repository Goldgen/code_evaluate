#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a,b;
    scanf("%c %c",&a,&b);
    if((a=='C'&&b=='R')||(a=='R'&&b=='S')||(a=='S'&&b=='C')) printf("Alice");
    else if (a==b) printf("Tie");
    else printf("Bob");
    return 0;
}
