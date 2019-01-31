#include <stdio.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a=='S'&&b=='R'||a=='R'&&b=='C'||a=='C'&&b=='S')
       printf("Bob");
    else if(a==b)
        printf("Tie");
    else
        printf("Alice");
    return 0;
}
