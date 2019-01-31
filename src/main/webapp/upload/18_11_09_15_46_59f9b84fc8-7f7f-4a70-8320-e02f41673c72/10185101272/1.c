#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX=20181111;
int main()
{
    int i,f=0;
    for(i=6;i<100;i++){
        if(i%10==6&&i%3==0){
            if(f) printf(" ");
            printf("%d",i);
            f=1;
        }
    }
    return 0;
}
