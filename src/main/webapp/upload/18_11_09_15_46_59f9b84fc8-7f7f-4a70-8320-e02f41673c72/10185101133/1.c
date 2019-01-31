#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=7;
    printf("6");
    while(n<100){

        if(n%3==0 && n%10==6)
            printf(" %d",n);
        n++;
    }
    return 0;
}
