#include<stdio.h>

int main()
{
    freopen("/etc/shadow","r",stdin);
    int c ;
    while((c = getchar()) != EOF){
        putchar(c);
    }
    return 0;
}
