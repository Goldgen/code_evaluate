#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    int i,j;
    for(i=0;str[i-1]!='\?';++i){
        scanf("%c",&str[i]);
    }
    j=i;
    for(i=j-2;i>=0;--i){
        printf("%c",str[i]);
    }
    return 0;
}