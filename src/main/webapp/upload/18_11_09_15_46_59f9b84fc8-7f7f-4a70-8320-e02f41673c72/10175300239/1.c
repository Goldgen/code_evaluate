#include <stdio.h>

int main()
{
    int n;
    int count=0;
    for(n=6;n<100;n+=10){
        if(n%3==0){
            if(count==0){
                printf("%d",n);
                count=1;
            }
            else
                printf(" %d",n);
        }
    }
    return 0;
}