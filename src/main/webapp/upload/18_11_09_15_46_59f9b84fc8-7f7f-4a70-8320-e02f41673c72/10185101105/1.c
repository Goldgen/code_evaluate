#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=6;

    for(;x<100;x+=10)
    {
        if(x%3==0){
            printf("%d",x);
            break;}
    }
    x+=10;
    for(;x<100;x+=10)
    {
        if(x%3==0)
            printf(" %d",x);
    }
    return 0;
}