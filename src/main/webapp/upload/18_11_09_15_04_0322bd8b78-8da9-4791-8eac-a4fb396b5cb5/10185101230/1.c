#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m,n;
    scanf("%c %c",&m,&n);
    if (m=='S'&&n=='R')
        printf("Bob");
    if (m=='R'&&n=='C')
        printf("Bob");
    if (m=='C'&&n=='S')
        printf("Bob");
    if (n=='S'&&m=='R')
        printf("Alice");
    if (n=='R'&&m=='C')
        printf("Alice");
    if (n=='C'&&m=='S')
        printf("Alice");
    if (n==m)
        printf("Tie");
    return 0;
}
