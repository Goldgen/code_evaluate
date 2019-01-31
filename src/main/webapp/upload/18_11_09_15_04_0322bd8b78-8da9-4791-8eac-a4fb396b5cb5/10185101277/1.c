#include <stdio.h>
int main(void)
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a=='S'&&b=='C') printf("Alice");
    else if(b=='S'&&a=='C') printf("Bob");
    else if(a=='R'&&b=='S') printf("Alice");
    else if(b=='R'&&a=='S') printf("Bob");
    else if(a=='C'&&b=='R') printf("Alice");
    else if(b=='C'&&a=='R') printf("Bob");
    else if(a==b) printf("Tie");
    return 0;
}
