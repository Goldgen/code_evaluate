#include <stdio.h>
int main()
{
    char a='a',b='b';
    scanf("%c %c",&a,&b);
    if(a==b)
        printf("Tie");
    if((a=='S'&&b=='C')||(a=='R'&&b=='S')||(a=='C'&&b=='R'))
        printf("Alice");
    if((a=='C'&&b=='S')||(a=='S'&&b=='R')||(a=='R'&&b=='C'))
        printf("Bob");
    return 0;
}
