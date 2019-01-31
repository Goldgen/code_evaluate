#include <stdio.h>
int main()
{   int n=6;
    printf("6");
    for(n=36;n<100;n=n+10)
    {if(n%3==0)
        printf(" %d",n);}
    return 0;
}