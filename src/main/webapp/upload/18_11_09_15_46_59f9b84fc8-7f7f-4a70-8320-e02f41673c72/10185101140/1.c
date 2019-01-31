#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;int m;int i=1;
    for(n=1;n<100;n++){
        m=n%10;
        if(m==6){
            if(n%3==0){
                if(i>1) printf(" ");
                printf("%d",n);
                i++;

            }
        }
        else continue;
    }
    return 0;
}
