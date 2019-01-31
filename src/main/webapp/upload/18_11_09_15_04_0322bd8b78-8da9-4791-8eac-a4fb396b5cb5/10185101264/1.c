#include <stdio.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if((a=='S'&&b=='C')||(a=='C'&&b=='R')||(a=='R'&&b=='S'))
        printf("Alice");
    else if(a==b)
        printf("Tie");
    else
        printf("Bob");
}