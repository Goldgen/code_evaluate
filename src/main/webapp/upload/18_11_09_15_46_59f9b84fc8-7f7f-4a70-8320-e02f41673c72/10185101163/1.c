#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    for(i=1;i<100;i++){
        if(i%3==0&&i%10==6)printf("%d",i);
        if(i==6||i==36||i==66) printf(" ");
    }
    return 0;
}
