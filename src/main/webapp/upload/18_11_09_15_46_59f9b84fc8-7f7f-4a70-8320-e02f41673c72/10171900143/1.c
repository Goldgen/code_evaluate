#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    printf("6");
    for(int i=7;i<100;i++){
        if(i%3==0 && i%10==6)printf(" %d",i);
    }


    return 0;
}


